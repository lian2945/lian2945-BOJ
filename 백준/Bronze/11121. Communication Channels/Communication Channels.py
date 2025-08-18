n = int(input().strip())

for _ in range(n):
    a, b = input().split()
    if a == b:
        print("OK")
    else:
        print("ERROR")