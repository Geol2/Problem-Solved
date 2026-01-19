N = int(input())
count = 0

for i in range(1, 1001):
    for j in range(1, 1001):
        if(i**2 == j**2 + N):
            count = count + 1

print(count)