from collections import defaultdict
N = int(input())

for i in range(N):
    V = int(input())

    many = defaultdict(int)
    for j in range(V):
        S = int(input())
        many[S] += 1
    
    max_count = max(many.values())
    candidates = [key for key, value in many.items() if value == max_count]
    print(min(candidates))