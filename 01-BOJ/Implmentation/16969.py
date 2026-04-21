from itertools import groupby

S = list(input())

groups = [''.join(chars) for _, chars in groupby(S)]

result = 1
for i in groups:
    count = 10
    alpa = 26

    for j in i:
        if j == "c":
            result = result * alpa
            count -= 1
        elif j == "d":
            result = result * count
            alpa -= 1

print(result)