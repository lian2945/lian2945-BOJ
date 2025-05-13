n = int(input())
times = [sum(map(int, input().split())) for _ in range(n)]
print(min(times))
