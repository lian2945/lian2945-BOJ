T = int(input())
for _ in range(T):
    steps = input()
    count = 0
    for ch in steps:
        if ch == 'D':
            break
        count += 1
    print(count)
