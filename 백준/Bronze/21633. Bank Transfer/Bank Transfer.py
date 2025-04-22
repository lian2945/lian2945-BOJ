n = int(input())
res = 25 + 0.01 * n
res = max(100, res)
res = min(2000, res)
print(f"{res:.2f}")