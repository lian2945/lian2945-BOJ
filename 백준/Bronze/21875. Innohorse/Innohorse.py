cell_A = input().strip()
cell_B = input().strip()

x_A = ord(cell_A[0]) - ord('a') + 1
y_A = int(cell_A[1])
x_B = ord(cell_B[0]) - ord('a') + 1
y_B = int(cell_B[1])

dx = abs(x_B - x_A)
dy = abs(y_B - y_A)

x = min(dx, dy)
y = max(dx, dy)

print(x, y)