X = int(input())
Y = int(input())
Z = int(input())

total_time = X + Y

limit_time = Z * 60 + 30

total_time_minutes = total_time * 60

if total_time_minutes <= limit_time:
    print(1)
else:
    print(0)