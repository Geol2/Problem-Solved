N, K = map(int, input().split())

def factorial(n):
  if n == 0 or n == 1:
    return 1
  else:
    return n * factorial(n-1)

# nCk = n!/(n-k)!k!
print(factorial(N) // (factorial(N-K) * factorial(K)))
