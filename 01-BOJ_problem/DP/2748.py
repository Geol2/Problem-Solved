N = int(input())

dp = [0] * (N + 1)
dp[0] = 1
dp[1] = 1

def fibo(N):
  if N == 0 and N == 1:
    return 1  
  for i in range(2, N + 1):
    dp[i] = dp[i - 1] + dp[i - 2]

  return dp[N - 1]

print(fibo(N))