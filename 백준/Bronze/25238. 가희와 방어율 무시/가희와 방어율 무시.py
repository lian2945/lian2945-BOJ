a, b = map(int, input().split())
if 100-(a-(a*(b/100))) > 0:
    print(1)
else:
    print(0)