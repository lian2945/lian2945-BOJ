import math

N, W, H = map(int, input().split())
diag = math.sqrt(W ** 2 + H ** 2)  

for _ in range(N):
    match_len = int(input())
    if match_len <= diag:
        print("DA")
    else:
        print("NE")
