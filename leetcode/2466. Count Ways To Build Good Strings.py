class Solution:
    def f(self, high: int, zero: int, one:int) -> int:
        if self.dp[high] != -1: return self.dp[high]
        c = 0
        if high >= zero:
            c += self.f(high-zero, zero, one)
        if high >= one:
            c += self.f(high-one, zero, one)
        self.dp[high] = c % self.mod
        return self.dp[high]

    def countGoodStrings(self, low: int, high: int, zero: int, one: int) -> int:
        self.dp = [1] + [-1] * high
        self.mod = 1e9+7
        ans = 0
        for i in range(high, low-1, -1):
            ans += self.f(i, zero, one)
        return int(ans%self.mod)