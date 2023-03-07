#include <iostream>
using namespace std;
int main() {
  int m; // 輸入的分鐘數
  cin >> m;
  int ans; // 輸出的答案
  ans = (m <= 25) ? (25 - m) : (60 - m + 25); // 如果m小於等於25，則答案是25減m；否則答案是60減m加25
  cout << ans << endl; // 輸出答案
  return 0;
}