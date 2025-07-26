n, m = map(int, input().split())
board = [input() for i in range(n)]

max_area = 1

for i in range(n):
    for j in range(m):
        max_len = min(n - i, m - j)
        for l in range(max_len, 0, -1):
            if board[i][j] == board[i][j + l - 1] == board[i + l - 1][j] == board[i + l - 1][j + l - 1]:
                max_area = max(max_area, l * l)
                break

print(max_area)