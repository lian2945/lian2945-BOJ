n, m = map(int, input().split())
li = []
for i in range(n):
    d = int(input())
    li.append(d)
t = int(m/sum(li))
for i in li:
    print(t*i)