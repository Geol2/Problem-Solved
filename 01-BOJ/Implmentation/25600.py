N = int(input())

currentScore = 0
maxScore = 0

for i in range(N):
  a, d, g = map(int, input().split())
  if a == d + g:
    currentScore = a * (d + g) * 2
  else:
    currentScore = a * (d + g)
  
  if maxScore < currentScore:
    maxScore = currentScore

print(maxScore)
