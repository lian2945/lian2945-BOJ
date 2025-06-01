N, W, H, L = map(int, input().split())

cols = W // L
rows = H // L

total_spaces = cols * rows

print(min(N, total_spaces))
