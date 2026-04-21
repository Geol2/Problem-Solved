from itertools import combinations

dwarf = [int(input()) for _ in range(9)]

for combo in combinations(dwarf, 7):
    if sum(combo) == 100:
        for n in sorted(combo):
            print(n)
        break