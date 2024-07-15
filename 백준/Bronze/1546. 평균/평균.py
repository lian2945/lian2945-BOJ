import sys
int(input())
a=0
data = list(map(int,sys.stdin.readline().split()))
for i in data:
    a+=i/max(data)*100
print(a/len(data))