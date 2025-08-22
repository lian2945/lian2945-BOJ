a, b, c = map(int, input().split())
d, e, f = map(int, input().split())

m1 = a * 3 + b * 20 + c * 120
m2 = d * 3 + e * 20 + f * 120

if m1 > m2:
    print("Max")
elif m1 < m2:
    print("Mel")
else:
    print("Draw")
