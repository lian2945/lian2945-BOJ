t1, m1, t2, m2 = map(int, input().split())

start_minutes = t1 * 60 + m1
end_minutes = t2 * 60 + m2

if end_minutes < start_minutes:
    total_minutes = end_minutes + 1440 - start_minutes
else:
    total_minutes = end_minutes - start_minutes

laps = total_minutes // 30

print(total_minutes, laps)