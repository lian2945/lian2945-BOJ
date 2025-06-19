s = input().strip()

result = []
current_idx = 0

while True:
    result.append(s[current_idx])
    jump = ord(s[current_idx]) - ord('A') + 1
    current_idx += jump
    if current_idx >= len(s):
        break

print(''.join(result))