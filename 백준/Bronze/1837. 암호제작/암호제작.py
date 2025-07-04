import sys
import math

def get_primes(limit):
    sieve = [True] * limit
    sieve[0] = sieve[1] = False
    for i in range(2, int(limit ** 0.5) + 1):
        if sieve[i]:
            for j in range(i*i, limit, i):
                sieve[j] = False
    return [i for i, is_prime in enumerate(sieve) if is_prime]

P_str, K_str = sys.stdin.readline().split()
P = int(P_str)
K = int(K_str)

primes = get_primes(K)

for p in primes:
    if P % p == 0:
        print(f"BAD {p}")
        break
else:
    print("GOOD")
