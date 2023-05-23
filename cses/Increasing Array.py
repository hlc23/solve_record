n = int(input())
nums = list(map(int, input().split(" ")))
ans = 0
for i in range(1, n):
    if nums[i] < nums[i-1]:
        diff = nums[i-1] - nums[i]
        ans += diff
        nums[i] = nums[i-1]
print(ans)