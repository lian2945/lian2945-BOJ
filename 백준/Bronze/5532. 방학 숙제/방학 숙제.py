import math

L = int(input())
A = int(input())
B = int(input())
C = int(input())
D = int(input())

korean_days = math.ceil(A / C)
math_days = math.ceil(B / D)

homework_days = max(korean_days, math_days)

play_days = L - homework_days

print(play_days)
