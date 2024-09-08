n=int(input())
a=0
b=1
for i in range(n):
    t=a
    a=b
    b=t+a
    b%=1000000007
    a%=1000000007
print(a)