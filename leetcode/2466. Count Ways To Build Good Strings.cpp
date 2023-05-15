class Solution {
public:

    vector<long long> dp;
    const int mod = 1e9+7;
    int _zero, _one;

    long long append(long long l){
        if (dp[l] != -1) return dp[l];
        long long ans = 0;
        if (l >= _zero){
            ans += append(l-_zero);
        }
        if (l >= _one){
            ans += append(l-_one);
        }
        if (ans >= mod) ans %= mod;
        dp[l] = ans;
        return ans;
    }


    int countGoodStrings(int low, int high, int zero, int one) {
        _zero = zero;
        _one = one;
        long long ans = 0;
        dp.resize(high+1, -1);
        dp[0] = 1;
        for (int i=high; i>=low; i--){
            ans += append(i);
        }
        return ans%mod;
    }
};