n = int(input())
for _ in range(n):
    data = input().split()
    id = data[0]
    s1, s2, s3 = map(int, data[1:])
    
    total = s1 + s2 + s3
    
    if total >= 55 and s1 >= 11 and s2 >= 8 and s3 >= 12:
        result = "PASS"
    else:
        result = "FAIL"
    
    print(f"{id} {total} {result}")
