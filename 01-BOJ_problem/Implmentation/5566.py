N, M = map(int, input().split())

board = [0]
for i in range(N):
    board.append(int(input()))

dice = []
for i in range(M):
    dice.append(int(input()))

position = 1
count = 0

for i in range(M):
    position += dice[i]
    count += 1
    if position >= N:
        break
    position += board[position]
    if position >= N:
        break

print(count, end="")