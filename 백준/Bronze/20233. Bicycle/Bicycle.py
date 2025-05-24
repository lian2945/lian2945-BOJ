# Input
a = int(input())
x = int(input())
b = int(input())
y = int(input())
T = int(input())

# Calculating total cost for both options
extra1 = max(0, T - 30)
extra2 = max(0, T - 45)

cost1 = a + extra1 * x * 21
cost2 = b + extra2 * y * 21

print(cost1, cost2)
