n = int(input())
count = 0
for _ in range(n):
    abilities = input().strip()
    if "CD" not in abilities:
        count += 1
print(count)
