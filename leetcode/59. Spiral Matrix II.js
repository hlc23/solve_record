/**
 * @param {number} n
 * @return {number[][]}
 */
var generateMatrix = function(n) {
    var max_x = n,
        max_y = n,
        min_x = 0,
        min_y = 0,
        num = 1;
    var ans = new Array(n);
    for (let i = 0; i < n; i++) {
        ans[i] = new Array(n);
    }
    while (min_x < max_x && min_y < max_y){
        for (let i = min_y; i < max_y; i++) {
            ans[min_x][i] = num;
            num++;   
        }
        min_x++;
        for (let i = min_x; i < max_x; i++) {
            ans[i][max_y - 1] = num;
            num++;
        }
        max_y--;
        if (min_x < max_x){
            for (let i = max_y - 1; i >= min_y; i--) {
                ans[max_x - 1][i] = num;
                num++;
            }
            max_x--;
        }
        if (min_y < max_y){
            for (let i = max_x - 1; i >= min_x; i--) {
                ans[i][min_y] = num;
                num++;
            }
            min_y++;
        }
    }
    return ans;

};