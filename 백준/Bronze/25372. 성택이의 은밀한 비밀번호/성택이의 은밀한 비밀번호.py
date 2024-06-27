import sys
n=int(input())
for i in range(n):
    d=sys.stdin.readline().rstrip()
    if(len(d)>=6 and len(d)<=9):
        print("yes")
    else:
        print("no")