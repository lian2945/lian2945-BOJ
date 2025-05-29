A, B = map(int, input().split())
C, D = map(int, input().split())

case1_moves = B + C
case2_moves = A + D

print(min(case1_moves, case2_moves))