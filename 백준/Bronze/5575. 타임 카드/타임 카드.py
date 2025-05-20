def time_to_seconds(h, m, s):
    return h * 3600 + m * 60 + s

def seconds_to_time(seconds):
    h = seconds // 3600
    m = (seconds % 3600) // 60
    s = seconds % 60
    return h, m, s

for _ in range(3):
    h1, m1, s1, h2, m2, s2 = map(int, input().split())
    
    start_seconds = time_to_seconds(h1, m1, s1)
    end_seconds = time_to_seconds(h2, m2, s2)
    
    work_seconds = end_seconds - start_seconds
    
    h, m, s = seconds_to_time(work_seconds)
    
    print(h, m, s)
