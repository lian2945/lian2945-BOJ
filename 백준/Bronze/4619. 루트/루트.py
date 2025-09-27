while True:
    b, n = map(int, input().split())
    if b == 0 and n == 0:
        break
    
    # N제곱근 구하기
    root = int(b ** (1/n))
    
    # root와 root+1 중에서 더 가까운 것 찾기
    if abs(root**n - b) <= abs((root+1)**n - b):
        print(root)
    else:
        print(root+1)