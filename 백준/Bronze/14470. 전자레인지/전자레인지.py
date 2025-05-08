# 입력 받기
A = int(input())
B = int(input())
C = int(input())
D = int(input())
E = int(input())

total_time = 0

if A < 0:
    total_time += -A * C
    total_time += D
    total_time += B * E
else:
    total_time += (B - A) * E

print(total_time)