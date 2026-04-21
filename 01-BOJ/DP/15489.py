R, C, W = map(int, input().split())

arr = [[0 for col in range(30)] for row in range(30)]

arr[0][0] = 1
arr[1][0] = 1
arr[1][1] = 1

for i in range(2, 30):
    for j in range(i):
        arr[i][j] = arr[i-1][j-1] + arr[i-1][j]
    arr[i][i] = 1

result = 0
for i in range(W):
    for j in range(0, i + 1):
        result += arr[R+i-1][C+j-1]

print(result)