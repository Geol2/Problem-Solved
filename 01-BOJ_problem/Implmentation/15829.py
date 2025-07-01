N = int(input())
L = list(input())
M = 1234567891

sum = 0
result = list(0 for _ in range(len(L)))
for i in range(len(L)):
    L[i] = ord(L[i]) - 96
    sum += L[i] * (31 ** i)

print(sum % M)
