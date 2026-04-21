N = int(input())
S = list(input())

count = 0
for i in range(0, len(S)):
    if i >= (len(S) - 5):
        print(S[i], end="")