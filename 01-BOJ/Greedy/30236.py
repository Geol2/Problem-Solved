t = int(input())

for i in range(t):
    size = int(input())
    arr = list(map(int, input().split()))

    prev = 0
    for j in arr:
        b = prev + 1
        if b == j:
            b += 1
        prev = b

    print(prev)