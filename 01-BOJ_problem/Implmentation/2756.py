import math

T = int(input())

def score(x, y):
    distance = math.sqrt(abs(x)**2 + abs(y)**2)
    if distance <= 3 and distance >= 0:
        return 100
    elif distance <= 6:
        return 80
    elif distance <= 9:
        return 60
    elif distance <= 12:
        return 40
    elif distance <= 15:
        return 20
    else:
        return 0

for _ in range(T):
    A1_X, A1_Y, A2_X, A2_Y, A3_X, A3_Y, B1_X, B1_Y, B2_X, B2_Y, B3_X, B3_Y = map(float, input().split())

    A1_score = score(A1_X, A1_Y)
    A2_score = score(A2_X, A2_Y)
    A3_score = score(A3_X, A3_Y)
    A = A1_score + A2_score + A3_score

    B1_score = score(B1_X, B1_Y)
    B2_score = score(B2_X, B2_Y)
    B3_score = score(B3_X, B3_Y)
    B = B1_score + B2_score + B3_score

    who_win = ""
    if A == B:
        who_win = "TIE"
    elif A > B:
        who_win = "PLAYER 1 WINS"
    elif A < B:
        who_win = "PLAYER 2 WINS"

    print("SCORE: {0} to {1}, {2}.".format(A, B, who_win))