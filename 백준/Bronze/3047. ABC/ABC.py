nums = list(map(int, input().split()))
order = input()

nums.sort()

A, B, C = nums[0], nums[1], nums[2]

result = []
for ch in order:
    if ch == 'A':
        result.append(str(A))
    elif ch == 'B':
        result.append(str(B))
    elif ch == 'C':
        result.append(str(C))

print(' '.join(result))
