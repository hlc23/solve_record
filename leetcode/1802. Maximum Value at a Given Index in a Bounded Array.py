class Solution:
    def cu_sum(self, index, val, n):
        r = 0
        if val > index:
            r += (val + val - index) * (index + 1) // 2
        else:
            r += (val + 1) * val // 2 + (index - val) + 1
        if val > n - index:
            r += (val + val - n + 1 + index) * (n - index) // 2
        else:
            r += (val + 1) * val // 2 + (n - index - val)
        return r - val

    def maxValue(self, n: int, index: int, maxSum: int) -> int:
        l, r = 1, maxSum
        while l < r:
            mid = (l + r + 1) // 2
            if self.cu_sum(index, mid, n) <= maxSum:
                l = mid
            else:
                r = mid - 1
        return l