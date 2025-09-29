n = int(input())
menus = []
for _ in range(n):
    line = input().split()
    d = int(line[0])
    dishes = line[1:]
    menus.append(dishes)
    
recommend = menus[0]

print(len(recommend))
for dish in recommend:
    print(dish)