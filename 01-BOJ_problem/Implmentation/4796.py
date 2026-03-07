i = 1

while True:
    max_stay = 0
    roop = 0

    L, P, V = map(int, input().split())
    if L == 0 and P == 0 and V == 0:
        break
    
    roop = V // P
    stay = L * roop
    others_stay = V - (P * roop)
    max_stay = stay + min(others_stay, L)

    print("Case {0}: {1}".format(i, max_stay))
    i = i + 1
