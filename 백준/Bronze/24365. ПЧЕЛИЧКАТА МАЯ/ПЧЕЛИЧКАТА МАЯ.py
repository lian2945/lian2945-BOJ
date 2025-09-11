def min_bee_moves(a, b, c):
    target = (a + b + c) // 3
    diff1 = a - target
    diff2 = b - target
    return abs(diff1) + abs(diff1 + diff2)

a, b, c = map(int, input().split())
print(min_bee_moves(a, b, c))
