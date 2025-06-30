while True:
    a, b, c = input().split()
    if int(a) == 0 and int(b) == 0 and int(c) == 0:
        break
    if int(a) ** 2 + int(b) ** 2 == int(c) ** 2 or int(b) ** 2 + int(c) ** 2 == int(a) ** 2 or int(a) ** 2 + int(c) ** 2 == int(b) ** 2:
        print("right")
    else:
        print("wrong")