t = int(input())
for _ in range(t):
    a = input().strip()
    b = input().strip()
    hamming_distance = sum(x != y for x, y in zip(a, b))
    print(f"Hamming distance is {hamming_distance}.")
