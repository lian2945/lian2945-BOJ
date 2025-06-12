A, B, C = map(int, input().split())

scores = [A, B, C]
scores.sort(reverse=True)

print(scores[0] + scores[1])
