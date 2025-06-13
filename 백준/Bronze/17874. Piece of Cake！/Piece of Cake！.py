n, h, v = map(int, input().split())
max_height = max(h, n - h)
max_width = max(v, n - v)
volume = max_height * max_width * 4
print(volume)