a = int(input())
b = int(input())
c = int(input())

at = 0 * a + 2 * b + 4 * c
bt = 2 * a + 0 * b + 2 * c
ct = 4 * a + 2 * b + 0 * c

print(min(at, bt, ct))
