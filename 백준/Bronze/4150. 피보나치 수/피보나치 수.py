a=0
b=1
n=int(input())
for i in range(n):
    t=a
    a=b
    b=a+t
print(a)