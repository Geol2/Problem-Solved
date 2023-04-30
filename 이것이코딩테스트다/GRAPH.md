# 그래프

## 서로소 집합 자료구조 (트리)

1. UNION 연산을 확인해서 서로 연결된 두 노드 A, B를 확인한다.
2. A를 B의 부모 노드로 설정한다
3. 모든 UNION 연산을 처리할 때까지 1, 2번 과정을 반복한다

시간 복잡도 : $ O(V + M(1 + log_{2-M/V}(V))) $

```python
def find_parent(parent, x):
  if parent[x] != x:
    return find_parent(parent, parent[x])
  return x


def union_parent(parent, a, b):
  a = find_parent(parent, a)
  b = find_parent(parent, b)
  if a < b:
    parent[b] = a
  else:
    parent[a] = b


v, e = map(int, input().split())
parent = [0] * (v + 1)

for i in range(1, v + 1):
  parent[i] = i

for i in range(e):
  a, b = map(int, input().split())
  union_parent(parent, a, b)

print('각 원소가 속한 집합: ', end='')
for i in range(1, v + 1):
  print(find_parent(parent, i), end=' ')

print()

print('부모 테이블: ', end='')
for i in range(1, v + 1):
  print(parent[i], end=' ')

```

## 신장 트리 특징

하나의 그래프가 있을 때, 모든 노드를 포함하면서 사이클이 존재하지 않는 부분 그래프

하나의 노드라도 간선이 없으면 안된다

## 크루스칼 알고리즘

가능한 한 최소한의 비용으로 신장 트리를 찾아야 할 때 사용하는 알고리즘

각 간선에 대한 비용이 있다

1. 간선 데이터를 비용에 따라 오름차순으로 정렬한다
2. 간선을 하나씩 확인하며 현재의 간선이 사이클을 발생시키는지 확인
    - 사이클이 발생하지 않는 경우 최소 신장 트리에 포함
    - 사이클이 발생하는 경우 최소 신장 트리에 포함시키지 않는다
3. 모든 간선에 대하여 2번의 과정을 반복한다

가장 거리가 짧은 간선부터 차례대로 집합에 추가하면 된다는 것

간선을 정렬하고 E개의 데이터를 정렬했을 때의 시간복잡도를 가진다

시간 복잡도 : $ O(ElogE) $

```python
def find_parent(parent, x):
  if parent[x] != x:
    parent[x] = find_parent(parent, parent[x])
  return parent[x]

def union_parent(parent, a, b):
  a = find_parent(parent, a)
  b = find_parent(parent, b)
  if a < b:
    parent[b] = a
  else:
    parent[a] = b

v, e = map(int, input().split())
parent = [0] * (v + 1)

edges = []
result = 0

for i in range(1, v + 1):
  parent[i] = i

for _ in range(e):
  a, b, cost = map(int, input().split())
  edges.append((cost, a, b))

edges.sort()

for edge in edges:
  cost, a, b = edge
  if find_parent(parent, a) != find_parent(parent, b):
    union_parent(parent, a, b)
    result += cost

print(result)
```

## 위상 정렬

방향 그래프의 모든 노드를 방향성에 거스르지 않도록 순서대로 나열하는 것

1. 진입차수가 0인 노드를 큐에 넣는다
2. 큐가 빌 때까지 다음의 과정을 반복한다
    - 큐에서 원소를 꺼내 해당 노드에서 출발하는 간선을 그래프에서 제거
    - 새롭게 진입차수가 0이 된 노드를 큐에 넣는다

예를 들어, 선수과목을 고려한 학습 순서 설정을 들 수 있다

시간 복잡도 : $ O(V + E) $

```python
from collections import deque

v, e = map(int, input().split())
indegree = [0] * (v + 1)
graph = [[] for i in range(v + 1)]

for _ in range(e):
  a, b = map(int, input().split())
  graph[a].append(b)
  indegree[b] += 1

def topology_sort():
  result = []
  q = deque()

  for i in range(1, v + 1):
    if indegree[i] == 0:
      q.append(i)

  while q:
    now = q.popleft()
    result.append(now)

    for i in graph[now]:
      indegree[i] -= 1
      if indegree[i] == 0:
        q.append(i)

  for i in result:
    print(i, end=' ')

topology_sort()
```