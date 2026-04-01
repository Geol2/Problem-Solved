n = int(input())

for i in range(n):
    line = list(map(int, input().split()))
    line.sort()

    print("Scenario #{0}:".format(i + 1))
    if (line[2]**2) == ((line[1]**2) + (line[0]**2)):
        print("yes")
    else:
        print("no")
    print("")