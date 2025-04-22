n = int(input())
res = 0.01 * n + 25
res = max(res, 100)
res = min(res, 2000)
print(f"{res:.2f}")