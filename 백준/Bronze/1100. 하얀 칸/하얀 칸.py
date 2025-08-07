count = 0
for r in range(8):
    row = input()
    for c in range(8):
        if (r + c) % 2 == 0 and row[c] == 'F':
            count += 1
print(count)