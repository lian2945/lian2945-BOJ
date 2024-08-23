def gcd(a,b):
    if(b==0):
        return a
    else:
        return gcd(b, a%b)
n=int(input())
for i in range(n):
    n,m = map(int, input().split())
    print(int(n*m/gcd(n,m)))