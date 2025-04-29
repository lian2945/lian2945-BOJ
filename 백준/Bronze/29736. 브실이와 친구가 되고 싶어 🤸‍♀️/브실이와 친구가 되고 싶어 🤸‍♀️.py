a,b = map(int, input().split())
n,m = map(int, input().split())

low = max(a, n-m)
high = min(b, n+m)

if low > high:
    print("IMPOSSIBLE")
else:
    print(high-low+1)
