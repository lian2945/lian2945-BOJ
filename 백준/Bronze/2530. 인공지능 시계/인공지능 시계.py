h, m, s = map(int, input().split())
t = int(input())
h = h+(t//3600)
m = m+(((t%3600)//60))
s = s+(((t%3600)%60))
if(s >= 60):
  m += 1
  s %= 60
if(m >= 60):
  h += 1
  m %= 60
h %= 24
print(h, m, s)