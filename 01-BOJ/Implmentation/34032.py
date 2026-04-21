N = int(input())
S = input()

count = [0, 0]
for i in range(N):
    if S[i] == 'X':
        count[0] += 1
    elif S[i] == 'O':
        count[1] += 1

if(count[0] > count[1]):
  print("No")
else:
  print("Yes")