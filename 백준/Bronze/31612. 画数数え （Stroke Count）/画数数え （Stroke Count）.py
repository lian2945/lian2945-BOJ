n = int(input())
s = input()
dic = {'j': 2, 'o': 1, 'i': 2}
print(sum(dic[c] for c in s))