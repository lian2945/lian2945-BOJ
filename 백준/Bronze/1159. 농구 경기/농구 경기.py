from collections import Counter

n = int(input())
counter = Counter()
for _ in range(n):
    name = input().strip()
    counter[name[0]] += 1

result = [ch for ch in sorted(counter) if counter[ch] >= 5]

if result:
    print(''.join(result))
else:
    print('PREDAJA')
