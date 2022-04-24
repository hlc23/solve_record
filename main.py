from hlc23.zerojudge_crawler import zj_crawler
import os
import json
import time

def serach_language(id):
    '''
    判斷此id有哪些語言
    '''
    language = ["cpp","py"]
    run_language = []
    for l in language:
        if f"main.{l}" in os.listdir(f"./zerojudge/{id}/"):
            run_language.append(l)
    return run_language

def get_ymd(interval: str = ".") -> str:
    '''
    Input:
        分隔號
    Process:
        獲取西元年月日
    Output:
        西元年月日
        ex. 2022.3.17
    '''
    y = str(int(time.strftime("%Y", time.localtime())))
    m = str(int(time.strftime("%m", time.localtime())))
    d = str(int(time.strftime("%d", time.localtime())))
    result = y+interval+m+interval+d
    return result

def get_time_with_word() -> str:
    '''
    Input:
        None
    Process:
        獲取時間並格式化
    Output:
        輸出格式化時間
        ex. 16:12:06
    '''
    result = time.strftime("%H點%M分", time.localtime())
    return result

# 重置error.txt
with open("error.txt",mode = "w",encoding="utf-8") as error:
    pass

# 取得所有id
zj_solved_id = sorted(os.listdir("./zerojudge"))

# 讀取info.json並修改zj_solved_id
with open("info.json",mode="r",encoding="utf-8") as info:
    info_data = json.load(info)

info_data['unsolve'] = sorted(info_data['unsolve'])

for id in info_data['unsolve']:
    if id in zj_solved_id:
        info_data['unsolve'].remove(id)

with open("info.json",mode="w",encoding="utf-8") as new_info:
    json.dump(info_data, new_info,indent=4,ensure_ascii=False)


cpp_list = []
py_list = []

# 運行各個題目id
for id in zj_solved_id:
    # 顯示當前運作id
    print("running id :",id)

    try:
        zj = zj_crawler(id)
        with open(f"./zerojudge/{id}/README.md",mode="w",encoding="utf-8") as md:
            # 敘述、說明、範例標題
            md.write(f'''# {zj.title}\n\n## 敘述\n\n{zj.problem_content}\n\n## 說明\n\n輸入:\n\n{zj.input_illustrate}\n\n---\n\n輸出:\n\n{zj.output_illustrate}\n\n## 範例\n''')
            # 範例
            c = 1
            for t in range(zj.ex_test_case_quantity):
                md.write(f'''範例{c}\n\n```\n輸入:\n{zj.ex_input_list[t]}\n---\n\n輸出:\n{zj.ex_output_list[t]}\n```\n''')
                c += 1
            # 程式碼
            md.write('''\n## 程式碼''')
            # 各語言程式碼
            for l in serach_language(id):
                if l == "cpp":
                    cpp_list.append(f"- [{zj.title}](./zerojudge/{id}/)")
                if l == "py":
                    py_list.append(f"- [{zj.title}](./zerojudge/{id}/)")
                try:
                    with open(f"./zerojudge/{id}/main.{l}",mode="r",encoding="utf-8") as file:
                        code = file.read()
                    md.write(f'''\n{l}\n\n```{l}\n{code}\n```\n''')

                except UnicodeDecodeError:
                    md.write(f'''\n{l}\n\n''')
                    md.write(f'''\n在讀取main.{l}時編碼錯誤\n''')
                    with open("error.txt",mode="a",encoding="utf-8") as error:
                        error.write(f"{id}: 編碼錯誤\n")

            # 標籤
            md.write('\n## 標籤\n')
            if len(zj.tags_list) == 0:
                md.write("\n")
                md.write("無")
            else:
                for t in range(len(zj.tags_list)):
                    md.write(f"- {zj.tags_list[t]}\n")
            # 連結
            md.write('''\n\n## 連結\n''')
            # 各語言連結
            for l in serach_language(id):
                md.write(f'''- GitHub: [{l}程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/{id}/main.{l})\n''')
            md.write(f'''\n\n- 題目來源: [zerojudge]({zj.zj_url})\n\n## [回首頁](https://henryleecode23.github.io/solve_record/)\n\n''')
            md.write(f'''此頁面最後編輯時間: {get_ymd()} {get_time_with_word()}\n''')
        print(f"id:{id} finish")

    except: #未知錯誤
        print("Unknow error")
        with open(f"./zerojudge/{id}/README.md",mode="w",encoding="utf-8") as md:
            md.write('''# 錯誤\n\n# 作者太弱了,程式在生成這一頁時發生了未知錯誤\n\n## 歡迎各路大佬指教\n\n# 題目來源: [{zj.title}]({zj.zj_url})\n\n# [回首頁](https://henryleecode23.github.io/solve_record/)''')
        with open("error.txt",mode="a",encoding="utf-8") as error:
            error.write(f"{id}: 未知錯誤\n")

with open("README.md",mode = "w",encoding="utf-8"):
    pass

with open("README.md", mode="w",encoding="utf-8") as readme:
    # zerojudge
    readme.write("# 解題紀錄\n\n## zerojudge\n\n### 題目\n")
    if len(cpp_list) > 0:
        readme.write("\n#### cpp\n\n")
        for text in cpp_list:
            readme.write(text+"\n")
    if len(py_list) > 0:
        readme.write("\n#### py\n\n")
        for text in py_list:
            readme.write(text+"\n")
    if len(info_data['unsolve']) >0:
        readme.write("\n### 待解\n\n")
        for id in info_data["unsolve"]:
            zj = zj_crawler(id)
            readme.write(f"- [{zj.title}]({zj.zj_url})\n")
    # NHDK
    readme.write('''\n## NHDK Ten Point Round\n\n''')
    for n in sorted(os.listdir("./NHDK/")):
        readme.write(f'''### {n}\n\n''')
        for p in sorted(os.listdir(f"./NHDK/{n}")):
            readme.write(f'''[{p}](./NHDK/{n}/{p}/)\n\n''')
    # extra
    with open("extra.md",mode="r",encoding="utf-8") as extra:
        readme.write(extra.read())
    readme.write('''\n## 作者的話:\n\n這個網站是使用Github page及自己寫的腳本和爬蟲所完成，目的是想記錄自己解題~~也許還能順便當學習歷程~~，我認為在許多細節還有許多地方可以改進，以及程式能有更好的寫法，如果有什麼建議想要提供，或是我的程式有哪些地方有Bug想要告訴我，歡迎到這個專案的[Github頁面](https://henryleecode23.github.io/solve_record/)發issues或是透過電子郵件聯絡我\n\nGmail: henry.lee.code23@gmail.com''')
    readme.write(f'''\n\n\n\n最後更新時間: {get_ymd()} {get_time_with_word()}\n\n\n''')
    readme.write('''最後更新時間可能因程式運行裝置不同而有所變化''')
