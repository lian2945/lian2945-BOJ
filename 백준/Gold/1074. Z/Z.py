def recur(n, r, c):
    if n == 1:
        return r * 2 + c
    t = 2 ** (n - 1)
    quarter = t * t
    if r < t and c < t:
        return recur(n - 1, r, c)
    elif r < t and c >= t:
        return recur(n - 1, r, c - t) + quarter
    elif r >= t and c < t:
        return recur(n - 1, r - t, c) + 2 * quarter
    else:
        return recur(n - 1, r - t, c - t) + 3 * quarter

n, r, c = map(int, input().split())
print(recur(n, r, c))
