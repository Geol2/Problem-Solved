S = input()
candidates = []

for i in range(1, len(S)):
    for j in range(i + 1, len(S)):
        first = S[:i][::-1]
        second = S[i:j][::-1]
        third =  S[j:][::-1]
        candidates.append(first + second + third)

print(min(candidates))