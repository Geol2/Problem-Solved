Q = int(input())

for i in range(Q):
    count = 0
    s = input()
    for j in range(len(s) - 2):
        if s.find("WOW", j, j + 3) != -1:
            count = count + 1
    
    print(count)