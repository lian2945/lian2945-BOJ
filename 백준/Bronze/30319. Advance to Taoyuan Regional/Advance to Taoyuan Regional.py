y,m,d = map(int, input().split("-"))
if m <= 8:
    print("GOOD")
elif m == 9 and d <= 16:
    print("GOOD")
else:
    print("TOO LATE")