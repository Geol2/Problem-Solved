N = int(input())

arr = []
summ = 0
for i in range(N + 1):
    roop = i + 1
    if N % roop == 0:
        arr.append(roop)
        summ = summ + (roop)

print(summ * 5 - 24)