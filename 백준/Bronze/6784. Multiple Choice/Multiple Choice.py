n = int(input())
student = [input().strip() for _ in range(n)]
key = [input().strip() for _ in range(n)]
print(sum([student[i] == key[i] for i in range(n)]))