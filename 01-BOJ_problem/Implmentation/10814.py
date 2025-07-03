N = int(input())
memberDict = {}

for _ in range(N):
  memberDict[_] = input().split()

sortedMemberDict = dict(sorted(memberDict.items(), key=lambda x: int(x[1][0])))

for value in sortedMemberDict.values():
  print(value[0], value[1])