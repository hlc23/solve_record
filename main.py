from lib.zerojudge_crawler import zj_crawler
import os
import json
import traceback
import datetime

# zerojudge
# --------------------------------
detected_cpp = []
detected_py = []

# detect language in each id
for zj_id in os.listdir("./zerojudge/"):
    files = os.listdir(f"./zerojudge/{zj_id}")
    if "main.cpp" in files:
        detected_cpp.append(zj_id)
    if "main.py" in files:
        detected_py.append(zj_id)


zj_index = {"cpp":sorted(detected_cpp),"py":sorted(detected_py)}

# read last time record
with open("lang.json", mode="r",encoding="utf-8") as lang_file:
    lang_data = json.load(lang_file)

# recover last time record
with open("lang.json", mode="w", encoding="utf-8") as lang_file:
    json.dump(zj_index, lang_file, indent=4, ensure_ascii=False)



# new - old = need_write
for id in lang_data["cpp"]:
    if id in detected_cpp:
        detected_cpp.remove(id)
for id in lang_data["py"]:
    if id in detected_py:
        detected_py.remove(id)

need_write = sorted(set(detected_cpp + detected_py))

# run crawler for need_write

for id in need_write:
    try:
        zj = zj_crawler(id)
        with open(f"./zerojudge/{id}/README.md",mode="w",encoding="utf-8") as md:
            # titel, context
            md.write(f'''# {zj.title}\n\n## 敘述\n\n{zj.problem_content}\n\n## 說明\n\n輸入:\n\n{zj.input_illustrate}\n\n---\n\n輸出:\n\n{zj.output_illustrate}\n\n## 範例\n''')
            # sample
            c = 1
            for t in range(zj.ex_test_case_quantity):
                md.write(f'''範例{c}\n\n```\n輸入:\n{zj.ex_input_list[t]}\n---\n\n輸出:\n{zj.ex_output_list[t]}\n```\n''')
                c += 1

            # code
            md.write('''\n## 程式碼''')
            
            files = os.listdir(f"./zerojudge/{id}/")

            for l in ["cpp", "py"]:
                try:
                    if f"main.{l}" in files:
                        with open(f"./zerojudge/{id}/main.{l}",mode="r",encoding="utf-8") as file:
                            code = file.read()
                        md.write(f'''\n{l}\n\n```{l}\n{code}\n```\n''')
                except Exception as e:
                    print(f"Error while running {l} in {id}")
                    print(traceback.format_exc())

            # tab
            md.write('\n## 標籤\n')
            if len(zj.tags_list) == 0:
                md.write("\n")
                md.write("無")
            else:
                for t in range(len(zj.tags_list)):
                    md.write(f"- {zj.tags_list[t]}\n")
            
            # links
            md.write('''\n\n## 連結\n''')
            for l in ["cpp", "py"]:
                if f"main.{l}" in files:
                    md.write(f'''- GitHub: [{l}程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/{id}/main.{l})\n''')
            md.write(f'''\n\n- 題目來源: [zerojudge]({zj.zj_url})\n\n## [回首頁](https://henryleecode23.github.io/solve_record/)\n\n''')
            
            # last edit time
            time = datetime.datetime.now(tz=datetime.timezone(datetime.timedelta(hours=8)))
            md.write(f'''\n最後編輯時間: {time:%Y-%m-%d %H:%M:%S}''')

    except:
        print(traceback.format_exc())

# index
# --------------------------------

with open("README.md", mode="w",encoding="utf-8") as readme:
    # zerojudge
    readme.write("# 解題紀錄\n\n## zerojudge\n\n### 題目\n")

    for lang in ["cpp", "py"]:
        readme.write(f"\n#### {lang}\n\n")
        for id in zj_index[lang]:
            readme.write(f"- [{zj_crawler(id).title}](./zerojudge/{id})\n")

    # codeforces

    readme.write(f"\n## Codeforces\n\n")
    for content in os.listdir("./codeforce/"):
        readme.write(f"\n- [{content}](./zerojudge/{content})\n")
    
    # NHDK
    readme.write('''\n## NHDK Ten Point Round\n\n''')
    for n in sorted(os.listdir("./NHDK/")):
        readme.write(f'''### {n}\n\n''')
        for p in sorted(os.listdir(f"./NHDK/{n}")):
            readme.write(f'''[{p}](./NHDK/{n}/{p}/)  \n''')
    # extra
    with open("extra.md",mode="r",encoding="utf-8") as extra:
        readme.write(extra.read())
    
    # edit time
    time = datetime.datetime.now(tz=datetime.timezone(datetime.timedelta(hours=8)))
    readme.write(f"\n\nLast updated:{time:%Y-%m-%d %H:%M:%S}")