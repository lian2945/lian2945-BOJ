while True:
    a, d, x = map(int, input().split())
    if a == 0 and d == 0 and x == 0:
        break

    if (x - a) % d == 0:
        n = (x - a) // d + 1
        if n >= 1:
            print(n)
        else:
            print("X")
    else:
        print("X")
