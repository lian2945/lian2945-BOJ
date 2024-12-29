n = list(map(int, input().split()))
t=0
for i in n:
    if i > 1:
        print("F")
        t=1
        break
if t==0:
    print("S")