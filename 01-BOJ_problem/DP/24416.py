arrayFiboCnt = 0

def fibo(n):
  if n == 1 or n == 2:
    return 1
  else:
    
    return fibo(n - 1) + fibo(n - 2)
  
def fiboDp(n):
  fibo = list()
  fibo.append(0)
  fibo.append(1)
  fibo.append(1)
  for i in range(3, n + 1):
    global arrayFiboCnt
    arrayFiboCnt += 1

    fibo.append(fibo[i - 1] + fibo[i - 2])

  return fibo[n]

N = int(input())

fiboDp(N)

print(fibo(N), arrayFiboCnt)