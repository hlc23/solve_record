inp_text = input().split(" ")

n = int(inp_text[0])
m = int(inp_text[1])
t = int(inp_text[2])

team1 = input().split(" ")
team2 = input().split(" ")

if n==1:
    team1.append(team1[0])
if m==1:
    team2.append(team2[0])

print("team1:",team1)
print("team2:",team2)

for time in range(t):
    q = int(input())
    q = q-1
    if q%2 == 0:
        print(team1[(q//2)%2])
    else:
        print(team2[(q//2)%2])
