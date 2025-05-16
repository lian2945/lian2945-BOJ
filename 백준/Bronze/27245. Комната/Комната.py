w = int(input())
l = int(input())
h = int(input())

min_wl = min(w, l)
max_wl = max(w, l)

if min_wl >= 2 * h and max_wl <= 2 * min_wl:
    print("good")
else:
    print("bad")
