N = int(input())
files = list(map(int, input().split()))
cluster_size = int(input())

total_space = 0
for f in files:
    if f == 0:
        continue
    clusters = (f + cluster_size - 1) // cluster_size
    total_space += clusters * cluster_size

print(total_space)
