from typing import List
from heapq import *

class Solution:
    def maxScore(self, nums1: List[int], nums2: List[int], k: int) -> int:
        table = sorted([(i, j) for i, j in zip(nums1, nums2)], key=lambda x: -x[1])
        top_k_heap = [x[0] for x in table[:k]]
        top_k_sum = sum(top_k_heap)
        heapify(top_k_heap)

        ans = top_k_sum * table[k-1][1]
        for i in range(k, len(nums1)):
            top_k_sum -= heappop(top_k_heap)
            top_k_sum += table[i][0]
            heappush(top_k_heap, table[i][0])

            ans = max(ans, top_k_sum * table[i][1])
        return ans