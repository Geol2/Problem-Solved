N = int(input())
numbers = list(map(int, input().split()))
mp = {}

for v in numbers:
    mp[v] = mp.get(v, 0) + 1

M = int(input())
queries = list(map(int, input().split()))
result = []

for v in queries:
    result.append(str(mp.get(v, 0)))

print(' '.join(result))