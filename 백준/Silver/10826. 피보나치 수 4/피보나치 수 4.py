i=int(input())
first=0
second=1
if(i==0):
    print(first)
elif(i==1):
    print(second)
else:
    for l in range(i-1):
        tmp=first
        first=second
        second=tmp+second
    print(second)