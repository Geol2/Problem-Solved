N = int(input())

x1, y1, x2, y2 = map(int, input().split())

result = []

for i in range(N):
    distance_arr = []
    current_x, current_y = x1, y1

    M = int(input())

    for j in range(M):
        x, y = map(int, input().split())

        dx = abs(x - current_x)
        dy = abs(y - current_y)

        current_x = x
        current_y = y

        distance_arr.append(dx + dy)

    dx = abs(x2 - current_x)
    dy = abs(y2 - current_y)
    distance_arr.append(dx + dy)

    result.append(sum(distance_arr))
    
index = result.index(min(result))
print(index + 1)