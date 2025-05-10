k = int(input())

for x in range(1, k + 1):
    n, s, d = map(int, input().split())
    
    m = s * d
    
    t = 0
    
    for _ in range(n):
        di, vi = map(int, input().split())
        if di <= m:
            t += vi
    
    print(f"Data Set {x}:")
    print(t)
    print()