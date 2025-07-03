N, M = map(int, input().split())
matrix = []
matrix2 = []
row_list = []
row_list2 = []

for i in range(N):
  row_list = list(map(int, input().split()))
  matrix.append(row_list)

for i in range(N):
  row_list2 = list(map(int, input().split()))
  matrix2.append(row_list2)

for i in range(N):
  for j in range(M):
    matrix[i][j] += matrix2[i][j]

for row in matrix:
  print(*row)

