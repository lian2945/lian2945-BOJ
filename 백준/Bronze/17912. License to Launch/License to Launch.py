n = int(input())
arr = list(map(int, input().split()))
min_val = arr[0]
min_index = 0
for i in range(1, n):
    if arr[i] < min_val:
        min_val = arr[i]
        min_index = i
print(min_index)
