
while True:
    N, M = map(int, input().split())
    if N == 0 and M == 0:
        break
    
    ranking_set = {}

    for _ in range(N):
        week_rank = list(map(int, input().split()))
        for j in week_rank:
            ranking_set.setdefault(j, 0)
            ranking_set[j] += 1
            
    max_point = max(ranking_set.values())
    second_point = max(p for p in ranking_set.values() if p < max_point)
    second_players = sorted([p for p, score in ranking_set.items() if score == second_point])
    
    print(' '.join(map(str, second_players)))