K = int(input())

def max_gap(score):
    gap = 0
    for i in range(len(score) - 1):
        if (score[i] - score[i + 1]) > gap:
            gap = score[i] - score[i + 1]
    return gap


for i in range(K):
    length_score = list(map(int, input().split()))
    length = length_score[0]
    score = length_score[1:]
    score.sort(reverse=True)

    max_score = max(score)
    min_score = min(score)
    gap_score = max_gap(score)
    print("Class " + str(i + 1))
    print("Max " + str(max_score) + ", " + "Min " + str(min_score) + ", " + "Largest gap " + str(gap_score))