def to_seconds(h, m, s):
    return h * 3600 + m * 60 + s

start = list(map(int, input().split(" : ")))
end = list(map(int, input().split(" : ")))

start_sec = to_seconds(*start)
end_sec = to_seconds(*end)

if end_sec >= start_sec:
    print(end_sec - start_sec)
else:
    print(86400 - start_sec + end_sec)