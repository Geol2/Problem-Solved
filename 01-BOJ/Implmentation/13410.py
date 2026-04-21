N, K = map(int, input().split())

arr = []
for j in range(1, K + 1):
    base = N * j
    reverse_value = str(base)[::-1]
    arr.append(int(reverse_value))

print(max(arr), end="")