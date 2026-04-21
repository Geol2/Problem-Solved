S = list(input())

for i in range(len(S)):
    divide = list(str(ord(S[i])))
    sum = 0
    for j in range(len(divide)):
        sum = sum + int(divide[j])

    for j in range(sum):
        if j == sum - 1:
            print(S[i])
        else:
            print(S[i], end = '')
