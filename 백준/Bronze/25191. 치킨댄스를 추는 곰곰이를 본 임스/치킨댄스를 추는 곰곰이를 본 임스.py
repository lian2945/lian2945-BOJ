def chicken_dance(n, a, b):
    max_chicken_can_eat = (a // 2) + b
    return min(n, max_chicken_can_eat)

n = int(input())
a, b = map(int, input().split())
print(chicken_dance(n, a, b))