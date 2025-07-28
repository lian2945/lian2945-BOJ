T = int(input())

good_scores = [1, 2, 3, 3, 4, 10]
evil_scores = [1, 2, 2, 2, 3, 5, 10]

for i in range(1, T+1):
    good_counts = list(map(int, input().split()))
    evil_counts = list(map(int, input().split()))

    good_total = sum(g * c for g, c in zip(good_scores, good_counts))
    evil_total = sum(e * c for e, c in zip(evil_scores, evil_counts))
    
    print(f'Battle {i}:', end=' ')
    if good_total > evil_total:
        print("Good triumphs over Evil")
    elif good_total < evil_total:
        print("Evil eradicates all trace of Good")
    else:
        print("No victor on this battle field")
