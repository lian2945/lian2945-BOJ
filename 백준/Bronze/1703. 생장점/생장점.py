def calculate_leaves():
    while True:
        line = input().strip()
        if line == '0':
            break
        
        data = list(map(int, line.split()))
        age = data[0]
        splits = data[1::2]
        cuts = data[2::2]

        leaves = 1
        
        # 각 해에 대해 계산
        for i in range(age):
            leaves *= splits[i]
            leaves -= cuts[i]

        print(leaves)

calculate_leaves()