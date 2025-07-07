def dogs_attacking(A, B, C, D, time):
    cycle1 = A + B
    cycle2 = C + D
    attack1 = ((time - 1) % cycle1) < A
    attack2 = ((time - 1) % cycle2) < C
    return attack1 + attack2

A, B, C, D = map(int, input().split())
P, M, N = map(int, input().split())

print(dogs_attacking(A, B, C, D, P))
print(dogs_attacking(A, B, C, D, M))
print(dogs_attacking(A, B, C, D, N))
