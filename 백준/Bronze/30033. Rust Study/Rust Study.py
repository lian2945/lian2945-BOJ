n = int(input())
c = 0
s = list(map(int, input().split()))
t = list(map(int, input().split()))
for i in range(n):
    if s[i] <= t[i]:
        c+=1
print(c)