N, X = map(int, input().split())

A = list(map(int, input().split()))

small_value = []

for i in range(N - 1):
    socks_value = A[i] * X + A[i + 1] * X
    small_value.append(socks_value)

print(min(small_value))