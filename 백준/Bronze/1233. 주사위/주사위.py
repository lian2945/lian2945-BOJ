a, b, c = map(int, input().split())
count = [0]*(a+b+c+1)
for i in range(1, a+1):
    for j in range(1, b+1):
        for k in range(1, c+1):
            count[i+j+k] += 1
max_count = max(count)
for idx in range(len(count)):
    if count[idx] == max_count:
        print(idx)
        break
