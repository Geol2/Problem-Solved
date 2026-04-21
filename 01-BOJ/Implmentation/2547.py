T = int(input())

for i in range(T):
    input()

    candy_count = 0
    N = int(input())

    for j in range(N):
        candy = int(input())

        candy_count += candy

    if candy_count % N == 0:
        print("YES")
    else:
        print("NO")