n = int(input())
cnt=0
while(n%5!=0):
    if(n<5 and n%5!=3):
        print("-1")
        exit()
    n-=3
    cnt+=1
print(cnt+n//5)