A, B = map(int, input().split())
C, D = map(int, input().split())

values = [
    A/C + B/D,
    C/D + A/B,
    D/B + C/A,
    B/A + D/C
]

max_value = max(values)
min_rotation = values.index(max_value)

print(min_rotation)