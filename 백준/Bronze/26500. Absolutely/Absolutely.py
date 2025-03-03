n = int(input())
for i in range(n):
    a, b = input().split()
    a=float(a)
    b=float(b)
    if a > b:
        print("%.1f" % (a-b))
    else:
        print("%.1f" % (b-a))