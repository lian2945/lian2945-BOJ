s = int(input())
a = int(input())
b = int(input())

x = max(0, (s - a + b - 1) // b)

price = 250 + 100 * x
print(price)