#include <bits/stdc++.h>
using namespace std;

// 輔助函數(partition function)，用來計算正整數 n 的分割數
int partition(int n, int m) {
    vector<vector<int> > dp(n, vector<int>(n)); // 動態規劃表格
    for (int i = 0; i <= n; i++) { // i 代表分割數的個數
        for (int j = 0; j <= m; j++) { // j 代表最大加數，即分割數中最大的數字
            if (i == 0) dp[i][j] = 1; // 初始化，當 i 為 0 時，dp[i][j] 為 1，因為當 i 為 0 時，只有一種分割方法，就是不分割，所以 dp[0][j] 等於 1
            else if (j == 0) dp[i][j] = 0; // 初始化，當 j 為 0 時，dp[i][j] 為 0，因為當 j 為 0 時，無法分割，所以 dp[i][0] 等於 0
            else if (j > i) dp[i][j] = dp[i][j-1]; // 略過，當 j 大於 i 時，無法分割，所以 dp[i][j] 等於 dp[i][j-1]
            else dp[i][j] = dp[i-j][j] + dp[i][j-1]; // 計算，dp[i][j] 等於 dp[i-j][j] 加上 dp[i][j-1]，因為分割數可以分為兩種情況，一種是最大加數為 j，另一種是最大加數不為 j，所以 dp[i][j] 等於這兩種情況的總和
        }
    }
    return dp[n][m]; // 回傳答案
}


// 主函數(main function)，用來讀取輸入並呼叫輔助函數
int main() {
	int n; // 要分解的正整數
	while (cin >> n) { // 讀取每筆測資
	cout << partition(n, n) << endl; // 計算並輸出答案
	}
	return 0;
}
