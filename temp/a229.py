def generate(n):
  # 定義一個函數，用於生成括號組合
  def backtrack(left, right, path):
    # 如果左右括弧都用完了，就添加結果
    if left == 0 and right == 0:
      ans.append(path) # 添加到答案列表中
      return # 返回上一層
    # 如果還有左括弧，就嘗試放一個左括弧
    if left > 0:
      backtrack(left - 1, right, path + "(") # 遞迴調用，更新參數
    # 如果還有右括弧，且右括弧數量大於左括弧數量，就嘗試放一個右括弧
    if right > 0 and right > left:
      backtrack(left, right - 1, path + ")") # 遞迴調用，更新參數

  ans = [] # 定義一個空列表，用於存儲答案
  backtrack(n, n, "") # 調用函數，從空字符串開始放置
  return ans # 返回答案列表

while True:
  try:
    n = int(input())
    for i in generate(n):
      print(i)
    print()
  except EOFError:
    break