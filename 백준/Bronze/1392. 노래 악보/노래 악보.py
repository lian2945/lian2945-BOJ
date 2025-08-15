import bisect

n, q = map(int, input().split())
times = [int(input()) for _ in range(n)]
queries = [int(input()) for _ in range(q)]

cum = []
total = 0
for t in times:
    total += t
    cum.append(total)

for query in queries:
    idx = bisect.bisect_right(cum, query)
    print(idx + 1)
