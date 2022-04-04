from zerojudge_crawler import zj_crawler
import os

with open("error.txt",mode = "w",encoding="utf-8") as error:
    pass
for id in os.listdir("./zerojudge"):
    if id == "template.md":
        continue
    print("running id :",id)


    try:
        zj = zj_crawler(id)
        with open(f"./zerojudge/{id}/README.md",mode="w",encoding="utf-8") as md:
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
            md.write('''
## 程式碼
    ''')
            if "main.cpp" in os.listdir(f"./zerojudge/{id}/"):
                with open(f"./zerojudge/{id}/main.cpp",mode="r",encoding="utf-8") as cpp:
                    cpp_code = cpp.read()
                md.write(f'''
c++

```cpp
{cpp_code}
```
''')
            if "main.py" in os.listdir(f"./zerojudge/{id}/"):
                with open(f"./zerojudge/{id}/main.py",encoding="utf-8") as py:
                    py_code = py.read()
                md.write(f'''
py

```py
{py_code}
```
''')
            md.write('\n## 標籤')
            for t in range(len(zj.tags_list)):
                md.write(f"\n- {zj.tags_list[t]}\n")

            md.write('''\n\n## 連結''')
            md.write("\n")
            if "main.cpp" in os.listdir(f"./zerojudge/{id}/"):
                md.write(f'''
- GitHub: [C++程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/{id}/main.cpp)
''')
            if "main.py" in os.listdir(f"./zerojudge/{id}/"):
                md.write(f'''
- GitHub: [Python程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/{id}/main.py)
''')
            md.write(f'''
- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid={id})
''')
            md.write("\n")
            md.write("## [回首頁](https://henryleecode23.github.io/solve_record/)")
            md.write("\n")
    except:
        with open(f"./zerojudge/{id}/README.md",mode="w",encoding="utf-8") as md:
            md.write('''
# 錯誤

# 作者太弱了,程式在生成這一頁時發生了錯誤

## 歡迎各路大佬指教

# [回首頁](https://henryleecode23.github.io/solve_record/)
''')
        with open("error.txt",mode="a",encoding="utf-8") as error:
            error.write(f"{id}\n")