nums = list(map(int, input().split()))
nums.sort()
a, b, c = nums

d1 = b - a
d2 = c - b

if d1 == d2:
    print(a - d1)
else:
    if d1 > d2:
        print(a + d2)
    else:
        print(b + d1)
