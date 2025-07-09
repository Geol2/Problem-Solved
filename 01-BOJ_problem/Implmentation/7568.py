N = int(input())

person = []
for i in range(N):
  weight, height = map(int, input().split())
  person.append((weight, height))

rank = []
for i in range(N):
  ranking = 1
  for j in range(N):
    if i != j:
      if person[i][0] < person[j][0] and person[i][1] < person[j][1]:
        ranking += 1
  rank.append(ranking)

for r in rank:
  print(r, end=' ')