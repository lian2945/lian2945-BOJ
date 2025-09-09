n = int(input())
p = int(input())

discounts = [0]
if n >= 5:
    discounts.append(500)
if n >= 10:
    discounts.append(p // 10)
if n >= 15:
    discounts.append(2000)
if n >= 20:
    discounts.append(p // 4)

print(max(p - max(discounts), 0))