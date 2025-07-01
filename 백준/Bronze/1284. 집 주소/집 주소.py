while True:
    n = input().strip()
    if n == '0': 
        break
    total = 2 + (len(n) - 1)
    for digit in n:
        if digit == '1':
            total += 2
        elif digit == '0':
            total += 4
        else:
            total += 3
    print(total)
