A, B = map(int, input().split())

attack_flag = "A"

while True:
    if attack_flag == "A":
        B = A + B
        attack_flag = "B"
        if B >= 5:
            print("yt")
            break
    else:
        A = A + B
        attack_flag = "A"
        if A >= 5:
            print("yj")
            break