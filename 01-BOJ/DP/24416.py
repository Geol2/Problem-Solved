fiboCnt1 = 0
fiboCnt2 = 0

def fibo(n):
  global fiboCnt1

  if n == 1 or n == 2:
    fiboCnt1 += 1
    return 1
  else:
    return fibo(n - 1) + fibo(n - 2)
  
def fiboDp(n):
  global fiboCnt2
  
  fibo = list()
  fibo.append(0)
  fibo.append(1)
  fibo.append(1)
  for i in range(3, n + 1):
    fiboCnt2 += 1

    fibo.append(fibo[i - 1] + fibo[i - 2])

  return fibo[n]

def fibonacci(N):
  return N - 2

N = int(input())

print(fiboDp(N), fibonacci(N))