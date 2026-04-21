from collections import deque

max = 100000
n, k = map(int, input().split())
visited = [0] * (max + 1)


def dfs():
    q = deque()
    q.append(n)
    while q:
        data = q.popleft()
        if k == data:
            print(visited[data])
            break
        for i in (data - 1, data + 1, data * 2):
            if 0 <= i <= max and not visited[i]:
                visited[i] = visited[data] + 1
                q.append(i)
dfs()
