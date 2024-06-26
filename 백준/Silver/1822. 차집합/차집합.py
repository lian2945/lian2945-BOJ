a,b=map(int, input().split())
li1=set(map(int, input().split()))
li2=set(map(int, input().split()))
for i in li2:
    if i in li1:
        li1.remove(i)
print(len(li1))
li1=sorted(li1)
for i in li1:
    print(i, end=" ")