from decimal import Decimal, getcontext
n = int(input())
getcontext().prec = n + 50
power = 2 ** n
result = Decimal(1) / Decimal(power)
res_str = format(result, 'f').rstrip('0').rstrip('.')
print(res_str)