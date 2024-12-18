n = int(input())
t=0
if(n%7==0):
    t+=1
if(str(n).count('7')>0):
    t+=2
print(t)