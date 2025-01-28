n = int(input())
for i in range(n):
    t = input()
    if(t[-1] == '.'):
        print(t)
    else:
        print(t + '.')