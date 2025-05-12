import sys
input = sys.stdin.read

data = input().split()
t = int(data[0])
results = []
for i in range(1, t + 1):
    n = int(data[i])
    results.append(str(n * n))
print('\n'.join(results))
