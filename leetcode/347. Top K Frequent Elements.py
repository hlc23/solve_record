from typing import List

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        table = {}
        for num in nums:
            if num in table:
                table[num] += 1
            else:
                table[num] = 1
        table = sorted(table.items(), key=lambda x: x[1], reverse=True)
        return [table[i][0] for i in range(k)]