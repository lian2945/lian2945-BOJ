n = int(input())
k = int(input())

total_quota = k + 60

if n <= total_quota:
    cost = n * 1500
else:
    cost = total_quota * 1500 + (n - total_quota) * 3000
    
print(cost)