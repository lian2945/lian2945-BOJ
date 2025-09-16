n = int(input())

for _ in range(n):
    c, p = map(int, input().split())
    
    print(c, p)
    
    if c == 1:
        total_cost = p
    else:
        total_cost = p + (c - 1) * (p - 2)
    
    print(total_cost)