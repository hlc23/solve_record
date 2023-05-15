/**
 * @param {number} low
 * @param {number} high
 * @param {number} zero
 * @param {number} one
 * @return {number}
 */
function f(dp, high, zero, one){
    if (dp[high] != -1) return dp[high];
    let c = 0;
    if (high >= zero) c += f(dp, high-zero, zero, one);
    if (high >= one) c += f(dp, high-one, zero, one);
    dp[high] = c%(1e9+7);
    return dp[high];
}
var countGoodStrings = function(low, high, zero, one) {
    dp = new Array(high+1).fill(-1);
    dp[0] = 1;
    let ans = 0;
    for (let i=high; i>=low; i--){
        ans += f(dp, i, zero, one);
    }
    return ans%(1e9+7);
};