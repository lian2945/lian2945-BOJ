n, k = map(int, input().split())
c = [int(input()) for _ in range(n)]
cnt = 0
for coin in reversed(c):
    if k == 0:
        break
    cnt += k // coin
    k %= coin
print(cnt)
