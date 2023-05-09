class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int mx = matrix.size(),
            my = matrix[0].size();
        vector<int> ans;
        int sx = 0, sy = 0;
        while (sx < mx and sy < my) {
            // right
            for (int i = sy; i < my; i++) {
                ans.push_back(matrix[sx][i]);
            }
            sx++;
            // down
            for (int i = sx; i < mx; i++) {
                ans.push_back(matrix[i][my - 1]);
            }
            my--;
            // left
            // check if there is a row left
            if (sx < mx) {
                for (int i = my - 1; i >= sy; i--) {
                    ans.push_back(matrix[mx - 1][i]);
                }
                mx--;
            }
            // up
            // check if there is a column left
            if (sy < my) {
                for (int i = mx - 1; i >= sx; i--) {
                    ans.push_back(matrix[i][sy]);
                }
                sy++;
            }
        }
        return ans;
    }
};