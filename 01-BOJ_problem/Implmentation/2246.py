N = int(input())

condos = []
for i in range(N):
    D, C = map(int, input().split())
    condos.append((D, C))

# 거리 기준 오름차순, 같으면 가격 기준 오름차순
condos.sort()

result = 0
min_cost = float('inf')

for distance, cost in condos:
    # 현재까지 본 것 중 최소 비용보다 **작으면** 후보
    if cost < min_cost:
        result += 1
        min_cost = cost

print(result)