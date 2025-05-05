n = int(input())
for _ in range(n):
    w, k = map(int, input().split())
    print((w * k) // 2)