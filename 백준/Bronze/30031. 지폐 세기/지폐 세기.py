n = int(input().strip())
value_map = {
    136: 1000,
    142: 5000,
    148: 10000,
    154: 50000
}
total = 0
for _ in range(n):
    width, height = map(int, input().split())
    total += value_map[width]
print(total)