x, y = map(int, input().split())

n = int(input())

for i in range(n):
    usage = int(input())
    if usage <= 1000:
        charge = usage * x
    else:
        charge = 1000 * x + (usage - 1000) * y
    print(usage, charge)