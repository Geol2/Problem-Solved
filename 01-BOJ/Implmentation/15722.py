n = int(input())

if n == 0:
    print(0, 0)
else:
    # 방향: 0=북(y+), 1=동(x+), 2=남(y-), 3=서(x-)
    dx = [0, 1, 0, -1]
    dy = [1, 0, -1, 0]
    
    x, y = 0, 0
    direction = 0  # 시작 방향: 북
    distance = 1   # 현재 방향으로 이동할 칸 수
    moved = 0      # 현재 방향으로 이미 이동한 칸 수
    dir_count = 0  # 같은 거리로 이동한 방향 변경 횟수
    
    for _ in range(n):
        x += dx[direction]
        y += dy[direction]
        moved += 1
        
        if moved == distance:
            moved = 0
            direction = (direction + 1) % 4
            dir_count += 1
            
            if dir_count == 2:
                distance += 1
                dir_count = 0
    
    print(x, y)