T = int(input())
for _ in range(T):
    n = int(input())
    result = (n * (n + 1) * (n + 2) * (n + 3)) // 8
    print(result)