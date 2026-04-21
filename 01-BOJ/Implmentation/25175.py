N, M, K = map(int, input().split())

result = ((M - 1) + (K - 3)) % N + 1

print(result)