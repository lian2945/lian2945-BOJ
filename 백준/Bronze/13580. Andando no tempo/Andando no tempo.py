from itertools import combinations, product

def can_return_to_present(a, b, c):
    credits = [a, b, c]
    for r in [1, 2, 3]:
        for subset in combinations(credits, r):
            for signs in product([-1, 1], repeat=r):
                total = sum(x * s for x, s in zip(subset, signs))
                if total == 0:
                    return "S"
    return "N"

# 입력
a, b, c = map(int, input().split())
print(can_return_to_present(a, b, c))
