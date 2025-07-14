from itertools import combinations

x = list(map(int, input().split()))

result = 0

for i, j in combinations(range(10), 2):
    result ^= (x[i] | x[j])

for i, j, k in combinations(range(10), 3):
    result ^= (x[i] | x[j] | x[k])

print(result)
