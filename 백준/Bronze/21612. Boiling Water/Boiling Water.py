B = int(input())

P = 5 * B - 400

if P > 100:
    location = -1
elif P == 100:
    location = 0
else:
    location = 1

print(P)
print(location)