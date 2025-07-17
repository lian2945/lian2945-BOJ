n = int(input())
arr = list(map(int, input().split()))

score = 0
current = 0

for x in arr:
    if x == 1:
        current += 1
        score += current
    else:
        current = 0

print(score)
