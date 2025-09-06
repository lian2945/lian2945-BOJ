n, m, k = map(int, input().split())
o = min(m, k)
x = min(n - m, n - k)
print(o + x)