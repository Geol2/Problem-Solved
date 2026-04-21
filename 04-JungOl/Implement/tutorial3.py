import sys
input = sys.stdin.readline

N, K = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(N)]
K %= 3

B = [[0]*(i+1) for i in range(N)]
for i in range(N):
    for j in range(i+1):
        a, b, c = i - j, j, (N-1) - i
        for _ in range(K):
            a, b, c = b, c, a
        ni, nj = (N-1) - c, b
        B[ni][nj] = A[i][j]

for row in B:
    print(*row)