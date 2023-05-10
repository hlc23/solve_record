class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int max_x = n,
            max_y = n,
            min_x = 0,
            min_y = 0,
            num = 1;
        vector<vector<int> > ans(n, vector<int>(n));
        while (min_x < max_x and min_y < max_y) {
            // right
            for (int i = min_y; i < max_y; i++) {
                ans[min_x][i] = num;
                num++;
            }
            min_x++;
            // down
            for (int i = min_x; i < max_x; i++) {
                ans[i][max_y - 1] = num;
                num++;
            }
            max_y--;
            // left
            // check if there is a row left
            if (min_x < max_x) {
                for (int i = max_y - 1; i >= min_y; i--) {
                    ans[max_x - 1][i] = num;
                    num++;
                }
                max_x--;
            }
            // up
            // check if there is a column left
            if (min_y < max_y) {
                for (int i = max_x - 1; i >= min_x; i--) {
                    ans[i][min_y] = num;
                    num++;
                }
                min_y++;
            }
        }
        return ans;
    }
};