d, h, m = map(int, input().split())

start_day = 11
start_hour = 11
start_minute = 11

start_total = (start_day * 24 * 60) + (start_hour * 60) + start_minute
end_total = (d * 24 * 60) + (h * 60) + m

duration = end_total - start_total

if duration < 0:
    print(-1)
else:
    print(duration)
