N = int(input())

jinju_cost = 0

data = {}
count = 0
for i in range(N):
    region, cost = map(str, input().split())
    data[region] = int(cost)
    if region == 'jinju' :
        jinju_cost = int(cost)

for i in data:
    if i != "jinju" and (data[i] > jinju_cost) :
        count = count + 1
print(jinju_cost)
print(count)