isbn = [9, 7, 8, 0, 9, 2, 1, 4, 1, 8]

for _ in range(3):
    digit = int(input())
    isbn.append(digit)

total = 0
for i in range(13):
    if i % 2 == 0:
        total += isbn[i] * 1
    else:
        total += isbn[i] * 3

print(f"The 1-3-sum is {total}")
