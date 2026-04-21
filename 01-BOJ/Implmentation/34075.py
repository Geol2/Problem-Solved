N = int(input())
S = list(input().split())

for i in range(len(S)):
    S[i] = S[i] + "DORO"
    print(S[i], end=" ")