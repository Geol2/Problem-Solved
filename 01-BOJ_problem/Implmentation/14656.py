N = int(input())
arr = list(map(int, input().split()))

count = 0
for i in range(N):
    if arr[i] != (i + 1):
        count = count + 1

print(count)