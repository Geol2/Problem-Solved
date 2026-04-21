N = int(input())

while True:
    num = int(input())
    if num == 0:
        break

    if num % N == 0:
        print(str(num) + " is a multiple of " + str(N) + ".")
    else:
        print(str(num) + " is NOT a multiple of " + str(N) + ".")