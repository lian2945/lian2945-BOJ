from itertools import permutations

steps = list(map(int, input().split()))
max_area = 0

for perm in permutations(steps):
    area = min(perm[0], perm[2]) * min(perm[1], perm[3])
    max_area = max(max_area, area)

print(max_area)
