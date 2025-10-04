total = int(input())

sum_prices = 0
for _ in range(9):
    sum_prices += int(input())

print(total - sum_prices)