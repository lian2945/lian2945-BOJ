import sys
input = sys.stdin.readline

T = int(input())
for _ in range(T):
    input()  # 빈 줄 처리
    N = int(input())
    total = 0
    for _ in range(N):
        total += int(input())
    if total % N == 0:
        print("YES")
    else:
        print("NO")
