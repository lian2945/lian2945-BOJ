symbol_to_value = {
    '-': 0,
    '\\': 1,
    '(': 2,
    '@': 3,
    '?': 4,
    '>': 5,
    '&': 6,
    '%': 7,
    '/': -1
}

while True:
    line = input().strip()
    if line == "#":
        break

    result = 0
    length = len(line)
    for i, char in enumerate(line):
        value = symbol_to_value[char]
        power = length - i - 1
        result += value * (8 ** power)

    print(result)
