t = int(input())
for _ in range(t):
    g, c, e = map(int, input().split())
    candies_needed = max(e - c, 0)
    if g == 1:
        per_candy_km = 1
    elif g == 2:
        per_candy_km = 3
    elif g == 3:
        per_candy_km = 5
    print(candies_needed * per_candy_km)