N = int(input())
scores = list(map(int, input().split()))

scores += [0] * (5 - len(scores))

korean, math, english, search, foreign2 = scores[:5]

result1 = 0
result2 = 0
result3 = 0

if korean > english:
    result1 = (korean - english) * 508
else:
    result1 = (english - korean) * 108

if math > search:
    result2 = (math - search) * 212
else:
    result2 = (search - math) * 305

if foreign2:
    result3 = foreign2 * 707

print((result1 + result2 + result3) * 4763)