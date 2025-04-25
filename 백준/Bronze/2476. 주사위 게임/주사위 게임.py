def cal_price(dice):
    a, b, c = dice
    if a == b == c:
        return 10000 + a * 1000
    elif a == b or b == c or a == c:
        if a == b or a == c:
            return 1000 + a * 100
        else:
            return 1000 + b * 100
    else:
        return max(dice) * 100

n = int(input())
dices = [list(map(int, input().split())) for i in range(n)]
prices = [cal_price(dice) for dice in dices]
print(max(prices))