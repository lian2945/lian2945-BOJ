n = int(input().strip())
durations = list(map(int, input().split()))
    
y_cost = 0
m_cost = 0
    
for duration in durations:
    y_cost += ((duration // 30) + 1) * 10
    m_cost += ((duration // 60) + 1) * 15
    
if y_cost < m_cost:
    print(f"Y {y_cost}")
elif m_cost < y_cost:
    print(f"M {m_cost}")
else:
    print(f"Y M {y_cost}")