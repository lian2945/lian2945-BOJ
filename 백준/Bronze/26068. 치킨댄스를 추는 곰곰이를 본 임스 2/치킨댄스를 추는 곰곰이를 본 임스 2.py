n = int(input())
c=0
for i in range(n):
    t = input()
    if int(t.split("-")[1]) <= 90:
        c+=1
print(c)