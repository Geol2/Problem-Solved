L, R, A = map(int, input().split())

while True:
    if A == 0:
        if L > R:
            L = R
        elif L < R:
            R = L
        break;
    elif L > R:
        # 왼발이 더 많다면,
        # 양발에 인원이 있는 경우 오른발에 채우고 양발을 차감
        if A > 0:
            R = R + 1
            A = A - 1
    elif L < R:
        # 오른발이 더 많다면,
        # 양발에 인원이 있는 경우 왼발에 채우고 양발을 차감
        if A > 0:
            L = L + 1
            A = A - 1
    elif A > 0:
        # 양발이 있다면
        if L >= R:
            # 왼발에 사람이 많다면
            R = R + 1
            A = A - 1
        elif L < R:
            # 오른발에 사람이 많다면
            L = L + 1
            A = A - 1
    elif A == 0:
        break;

print(L + R + A)

