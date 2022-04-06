import zerojudge_crawler

print("請輸入zerojudge題號")
inp_text = input()
try:
  zj = zerojudge_crawler.zj_crawler(inp_text)
  print("")
  print("------------------------------------")
  print(zj.title)
  
  print("敘述")
  print(zj.problem_content)
  
  print("說明")
  print(zj.input_illustrate)
  print(zj.output_illustrate)
  print("")
  c = 1
  for t in range(zj.ex_test_case_quantity):
    print(f"範例{c}: \n輸入: \n{zj.test_case_list[t][0]}\n輸出: \n{zj.test_case_list[t][1]}")
    c += 1
  print("")
  print('標籤')
  if len(zj.tags_list) == 0:
    print("無")
  else:
    for t in range(len(zj.tags_list)):
      print(f"{zj.tags_list[t]}\t")
  print('題目來源:',zj.zj_url)
  print("------------------------------------")
except:
  print("Error")