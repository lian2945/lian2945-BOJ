n = int(input())
s = set(map(int, input().split()))
for i in sorted(s):
    print(i, end=" ")