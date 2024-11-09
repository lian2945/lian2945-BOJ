memo = {1:1, 2:1}
def pibo(n):
    if n in memo:
        return memo[n]
    else:
        memo[n] = pibo(n-1) + pibo(n-2)
        return memo[n]
n=1
while(n!=-1):
    n = int(input())
    if(n==-1):
        break
    print(f"Hour {n}: {pibo(n)} cow(s) affected")