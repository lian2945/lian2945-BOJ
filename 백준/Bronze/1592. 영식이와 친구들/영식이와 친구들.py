N, M, L = map(int, input().split())
counts = [0] * (N + 1)
current = 1
throws = 0
    
while True:
    counts[current] += 1
    if counts[current] == M:
        break
    if counts[current] % 2 == 1:
        current = (current + L - 1) % N + 1
    else:
        current = (current - L - 1) % N + 1
    throws += 1
print(throws)
