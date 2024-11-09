memo = {1:1, 2:1}
n=0
def pibo(n):
    if not n in memo:
        memo[n] = pibo(n-1) + pibo(n-2)    
    return memo[n]
while(n!=-1):
    n = int(input())
    if(n==-1):
        break
    print(f"Hour {n}: {pibo(n)} cow(s) affected")