def binary_search(li, t):
    left = 0
    right = len(li) - 1
    while left <= right:
        mid = (left + right) // 2
        if li[mid] < t:
            left = mid + 1
        else:
            right = mid - 1
    return left

n = int(input())
data = list(map(int, input().split()))
li = [data[0]]

for i in range(1, len(data)): 
    if data[i] > li[-1]: # 마지막거보다 크면
        li.append(data[i]) # 뒤에 넣어주기
    else: # 작거나 같으면
        idx = binary_search(li, data[i]) # 자신의 위치 찾기
        li[idx] = data[i] # 수열 자기 위치에 값 바꿔치기하기
print(len(li))