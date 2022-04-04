from zerojudge_crawler import zj_crawler
import os

def serach_language(id):
    '''
    判斷有哪些語言的程式碼
    '''
    language = ["cpp","py"]
    run_language = []
    for l in language:
        if f"main.{l}" in os.listdir(f"./zerojudge/{id}/"):
            run_language.append(l)
    return run_language

# 重置error.txt
with open("error.txt",mode = "w",encoding="utf-8") as error:
    pass
# 運行各個題目id
for id in os.listdir("./zerojudge"):
    # 略過 template.md
    if id == "template.md":
        continue
    # 顯示當前運作id
    print("running id :",id)

    try:
        zj = zj_crawler(id)
        with open(f"./zerojudge/{id}/README.md",mode="w",encoding="utf-8") as md:
            # 敘述、說明、範例標題
            md.write(
    f'''
# {zj.title}

## 敘述

{zj.problem_content}
## 說明

輸入:

{zj.input_illustrate}

---

輸出:

{zj.output_illustrate}\n
## 範例
''')
            # 範例
            c = 1
            for t in range(zj.ex_test_case_quantity):
                md.write(f'''
範例{c}

```text
輸入:
{zj.ex_input_list[t]}
---

輸出:
{zj.ex_output_list[t]}```
''')
                c += 1
            # 程式碼
            md.write('''
## 程式碼
    ''')
            # cpp 程式碼
            if "main.cpp" in os.listdir(f"./zerojudge/{id}/"):
                with open(f"./zerojudge/{id}/main.cpp",mode="r",encoding="utf-8") as cpp:
                    cpp_code = cpp.read()
                md.write(f'''
c++

```cpp
{cpp_code}
```
''')
            # py 程式碼
            if "main.py" in os.listdir(f"./zerojudge/{id}/"):
                with open(f"./zerojudge/{id}/main.py",encoding="utf-8") as py:
                    py_code = py.read()
                md.write(f'''
py

```py
{py_code}
```
''')
            # 標籤
            md.write('\n## 標籤\n')
            for t in range(len(zj.tags_list)):
                md.write(f"- {zj.tags_list[t]}\n")
            # 連結
            md.write('''\n\n## 連結''')
            md.write("\n")
            # cpp 連結
            if "main.cpp" in os.listdir(f"./zerojudge/{id}/"):
                md.write(f'''
- GitHub: [C++程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/{id}/main.cpp)
''')
            # py 連結
            if "main.py" in os.listdir(f"./zerojudge/{id}/"):
                md.write(f'''
- GitHub: [Python程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/{id}/main.py)
''')
            # zerojudge連結
            md.write(f'''
- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid={id})
''')
            md.write("\n")
            # 回首頁
            md.write("## [回首頁](https://henryleecode23.github.io/solve_record/)")
            md.write("\n")
    except UnicodeDecodeError: #編碼錯誤
        with open(f"./zerojudge/{id}/README.md",mode="w",encoding="utf-8") as md:
            md.write('''
# 錯誤

# 作者太弱了,程式在生成這一頁時發生了編碼錯誤

## 歡迎各路大佬指教

# [回首頁](https://henryleecode23.github.io/solve_record/)
''')
        with open("error.txt",mode="a",encoding="utf-8") as error:
            error.write(f"{id}: 編碼錯誤\n")
    except: #未知錯誤
        with open(f"./zerojudge/{id}/README.md",mode="w",encoding="utf-8") as md:
            md.write('''
# 錯誤

# 作者太弱了,程式在生成這一頁時發生了未知錯誤

## 歡迎各路大佬指教

# [回首頁](https://henryleecode23.github.io/solve_record/)
''')
        with open("error.txt",mode="a",encoding="utf-8") as error:
            error.write(f"{id}: 未知錯誤\n")