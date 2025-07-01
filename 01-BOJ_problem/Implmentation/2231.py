N = int(input())

for i in range(1, N):
  num = sum(map(int, str(i)))
  divideSum = i + num
  if divideSum == int(N):
    print(i)
    break
else:
  print(0)