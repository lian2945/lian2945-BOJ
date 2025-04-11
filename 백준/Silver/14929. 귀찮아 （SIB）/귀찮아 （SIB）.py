n = int(input())
l = list(map(int, input().split()))

total = sum(l)
result = 0

for i in l:
    total -= i
    result += total*i
    
print(result)