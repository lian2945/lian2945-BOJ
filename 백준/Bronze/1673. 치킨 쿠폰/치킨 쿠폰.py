import sys

for line in sys.stdin:
    if line.strip():
        n, k = map(int, line.split())
        count = 0
        stamp = 0
        
        while True:
            count += n
            stamp += n
            n = stamp // k
            stamp %= k
            if n == 0:
                break
        
        print(count)
