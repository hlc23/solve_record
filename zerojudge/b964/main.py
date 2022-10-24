scores = int(input())
inp = input().split()
data = [int(n) for n in inp]
data.sort()
for i in data[:-1]:
    print(i, end=" ")
print(data[-1])
pass_data = [n for n in data if n>=60]
fail_data = [n for n in data if n<60]
pass_data.sort()
fail_data.sort()
if len(fail_data) != 0:
    print(fail_data[-1])
else:
	print("best case")
if len(pass_data) != 0:
    print(pass_data[0])
else:
	print("worst case")