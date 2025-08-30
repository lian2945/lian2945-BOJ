n, m = map(int, input().split())
original = [input().strip() for _ in range(n)]
input()
negative = [input().strip() for _ in range(n)]

wrong = 0
for i in range(n):
    for j in range(m):
        if original[i][j] == negative[i][j]:
            wrong += 1
print(wrong)
