t = int(input())
for _ in range(t):
    S = input().strip()
    all_upper = set(chr(i) for i in range(65, 91))
    used = set(S)
    unused = all_upper - used
    ans = sum(ord(c) for c in unused)
    print(ans)
