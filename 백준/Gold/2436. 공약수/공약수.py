import math

gcd, lcd = map(int, input().split())
d = lcd // gcd
a, b = 0, 0

for i in range(1, int(math.isqrt(d)) + 1):
    if d % i == 0:
        x, y = i, d // i
        if math.gcd(x, y) == 1:
            if a == 0 or a + b > x + y:
                a, b = x, y

print(gcd * a, gcd * b)
