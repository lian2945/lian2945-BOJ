result_map = {0: 'E', 1: 'A', 2: 'B', 3: 'C', 4: 'D'}

for _ in range(3):
    sticks = list(map(int, input().split()))
    belly_count = sticks.count(0)
    print(result_map[belly_count])