# 그래프

## 서로소 집합 자료구조 (트리)

1. UNION 연산을 확인해서 서로 연결된 두 노드 A, B를 확인한다.
2. A를 B의 부모 노드로 설정한다
3. 모든 UNION 연산을 처리할 때까지 1, 2번 과정을 반복한다


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