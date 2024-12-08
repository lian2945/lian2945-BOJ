n = 1
while n != 0:
    n = int(input())
    if n == 0:
        break
    elif n%42 == 0:
        print("PREMIADO")
    else:
        print("TENTE NOVAMENTE")