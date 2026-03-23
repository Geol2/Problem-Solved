N, K = map(int, input().split())

arr = []
count = 0
match = K
result = 0

for i in range(1, N + 1):
    arr.append(N % i)

for i in range(N):
    if arr[i] == 0:
        count += 1
    if count == match:
        result = i + 1
        break

print(result)
