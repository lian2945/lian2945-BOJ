n, c = map(int, input().split())
total = 0
bed = 0
bal = 0

for _ in range(n):
    a, t = input().split()
    a = int(a)
    total += a
    if t == "bedroom":
        bed += a
    if t == "balcony":
        bal += a

reduce = total - bal + (bal / 2)
cost = reduce * c

print(total)
print(bed)
print(cost)
