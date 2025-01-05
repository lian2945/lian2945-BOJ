n = int(input())
cnt=0
while n%5!=0:
    if n<5 and n%5!=2 and n%5!=4:
        print(-1)
        exit(0)
    n-=2
    cnt+=1
print(cnt+n//5)