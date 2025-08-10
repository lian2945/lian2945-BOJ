max_people = 0
current_people = 0
for _ in range(10):
    off, on = map(int, input().split())
    current_people = current_people - off + on
    if current_people > max_people:
        max_people = current_people
print(max_people)
