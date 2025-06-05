a3 = int(input())
a2 = int(input())
a1 = int(input())

b3 = int(input())
b2 = int(input())
b1 = int(input())

apples_score = a3 * 3 + a2 * 2 + a1
bananas_score = b3 * 3 + b2 * 2 + b1

if apples_score > bananas_score:
    print('A')
elif bananas_score > apples_score:
    print('B')
else:
    print('T')
