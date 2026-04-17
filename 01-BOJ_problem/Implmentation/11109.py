t = int(input())

for i in range(t):
    d, n, s, p = map(int, input().split())

    parallel = (d + (p * n))
    not_parallel = s * n

    if parallel > not_parallel:
        print("do not parallelize")
    elif parallel < not_parallel:
        print("parallelize")
    elif parallel == not_parallel:
        print("does not matter")
