n = int(input())
d = int(input())
l = d
while(d!=0):
    print(n*(d%10))
    d//=10
print(n*l)