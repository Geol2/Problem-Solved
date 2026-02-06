K = int(input())
S = list(input())

a = []
for i in range(0, len(S), K):
    a.append(S[i])

result = ''.join(a)
print(result)