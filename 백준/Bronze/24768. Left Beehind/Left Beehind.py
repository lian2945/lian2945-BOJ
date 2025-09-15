while True:
    x, y = map(int, input().split())
    if x == 0 and y == 0:
        break
    total = x + y
    if total == 13:
        print("Never speak again.")
    elif x > y:
        print("To the convention.")
    elif x < y:
        print("Left beehind.")
    else:
        print("Undecided.")
