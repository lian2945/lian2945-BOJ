n, m = map(int, input().split())
a = map(int, input().split())
b = map(int, input().split())
c=set()
d=set()
for i in a:
    c.add(i)
for j in b:
    d.add(j)

print(len(set(c-d)|set(d-c)))