X, Y = map(int, input().split())
min_price = X * 1000 / Y

N = int(input())
for _ in range(N):
    Xi, Yi = map(int, input().split())
    price = Xi * 1000 / Yi
    if price < min_price:
        min_price = price

print(f"{min_price:.2f}")
