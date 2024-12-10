n = int(input())
if n%3 == 1:
    print("U", end="")
elif n%3 == 2:
    print("O", end="")
else:
    print("S", end="")