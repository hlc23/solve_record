#include <iostream>
#include <string>
#include <map>
#include <stack>
using namespace std;

// 一個函數，用來計算化學式中的不同原子數量
map<string, int> count_atoms(string formula) {
  // 建立一個空的字典（map）來儲存不同原子和其數量
  map<string, int> atom_count;
  // 建立一個空的堆疊（stack）來儲存左括號位置
  stack<int> left_paren;
  // 用迴圈（loop）遍歷化學式中的每個字符（character）
  for (int i = 0; i < formula.length(); i++) {
    char c = formula[i];
    // 如果是元素符號，則判斷它是由一個或兩個字母組成
    if (isupper(c)) {
      string symbol = "";
      symbol += c;
      if (i + 1 < formula.size() && islower(formula[i + 1])) {
        symbol += formula[i + 1];
        i++;
      }
      // 將它加入到字典中，如果已經存在則不重複加入
      if (atom_count.find(symbol) == atom_count.end()) {
        atom_count[symbol] = 1;
      }
    }
    // 如果是數字，則判斷它是屬於哪個元素或括號內的所有元素的倍數
    else if (isdigit(c)) {
      int num = c - '0';
      if (i - 1 >= 0 && isdigit(formula[i - 1])) {
        num += (formula[i - 1] - '0') * 10;
        i--;
      }
      // 將它乘以相應的原子數量並更新到字典中
      if (!left_paren.empty() && left_paren.top() == i - 1) {
        int start = left_paren.top();
        left_paren.pop();
        int end = i - num;
        string sub_formula = formula.substr(start + 1, end - start - 1);
        map<string, int> sub_atom_count = count_atoms(sub_formula);
        for (auto it : sub_atom_count) {
          atom_count[it.first] += it.second * num;
        }
      } else {
        string symbol = "";
        symbol += formula[i - num];
        if (i - num - 1 >=0 && islower(formula[i - num -1])) {
          symbol += formula[i - num-1];
          i--;
        }
        atom_count[symbol] *= num;
      }
    }
    // 如果是左括號，則記錄下它出現的位置
    else if (c == '(') {
      left_paren.push(i);
    }
    // 如果是右括號，則找到對應的左括號位置，並取出括號內容作為一個新的化學式，然後重複步驟3至6來計算其原子數量
    else if (c == ')') {
      
    }
    
  
}
// 當迴圈結束時，輸出字典中儲存的不同原子和其數量
cout << "The different atoms and their counts in " << formula << " are:" << endl;
for (auto it : atom_count) {
cout << it.first << ": " << it.second << endl;
}
return atom_count;

}

// 主函數，用來測試程式是否正確
int main() {

string test_formula;
cin>>test_formula;

return 0;
}