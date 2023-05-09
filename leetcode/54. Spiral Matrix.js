/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
var spiralOrder = function(matrix) {
    let max_x = matrix.length;
    let max_y = matrix[0].length;
    let min_x = 0, min_y = 0;
    let ans = [];
    while (min_x < max_x && min_y < max_y) {
        for (let i = min_y; i < max_y; i++) {
            ans.push(matrix[min_x][i]);
        }
        min_x++;
        for (let i = min_x; i < max_x; i++) {
            ans.push(matrix[i][max_y - 1]);
        }
        max_y--;
        if (min_x < max_x) {
            for (let i = max_y - 1; i >= min_y; i--) {
                ans.push(matrix[max_x - 1][i]);
            }
            max_x--;
        }
        if (min_y < max_y) {
            for (let i = max_x - 1; i >= min_x; i--) {
                ans.push(matrix[i][min_y]);
            }
            min_y++;
        }
    }
    return ans;
};