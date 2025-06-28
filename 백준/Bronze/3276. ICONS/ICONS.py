import math

N = int(input())

min_sum = float('inf')
best_r, best_c = 1, N

for r in range(1, int(math.sqrt(N)) + 1):
    c = (N + r - 1) // r
    if r + c < min_sum:
        min_sum = r + c
        best_r, best_c = r, c

print(f"{best_r} {best_c}")