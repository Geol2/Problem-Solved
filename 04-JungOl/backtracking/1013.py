import sys
input = sys.stdin.readline

def main():
    N, M = map(int, input().split())
    grid = []
    for _ in range(N):
        line = input().strip().replace(' ', '')
        if len(line) < M:
            line = line + '.' * (M - len(line))
        grid.append(line[:M])
    
    # 각 * 칸에 대해, 그 칸을 덮을 수 있는 유효한 막대 후보들 미리 계산
    # 막대 ID: 0..H-1 은 가로, H..H+V-1 은 세로
    h_placements = []  # (r, c) 시작 위치
    v_placements = []
    
    # 유효한 배치 찾기
    for r in range(N):
        for c in range(M - 4):
            if all(grid[r][c+k] == '*' for k in range(5)):
                h_placements.append((r, c))
    for r in range(N - 4):
        for c in range(M):
            if all(grid[r+k][c] == '*' for k in range(5)):
                v_placements.append((r, c))
    
    H = len(h_placements)
    V = len(v_placements)
    total_placements = H + V
    
    # 각 배치가 덮는 칸들
    placement_cells = []
    for r, c in h_placements:
        placement_cells.append([(r, c+k) for k in range(5)])
    for r, c in v_placements:
        placement_cells.append([(r+k, c) for k in range(5)])
    
    # 각 * 칸 → 그 칸을 덮는 배치 ID 목록
    cell_candidates = {}
    star_cells = []
    for r in range(N):
        for c in range(M):
            if grid[r][c] == '*':
                cell_candidates[(r, c)] = []
                star_cells.append((r, c))
    
    for pid in range(total_placements):
        for cell in placement_cells[pid]:
            if cell in cell_candidates:
                cell_candidates[cell].append(pid)
    
    # 불가능 판정: 후보 없는 * 칸이 있으면 -1
    for cell in star_cells:
        if not cell_candidates[cell]:
            print(-1)
            return
    
    # 덮임 카운트
    cover_cnt = [[0]*M for _ in range(N)]
    
    def apply_placement(pid, delta):
        for r, c in placement_cells[pid]:
            cover_cnt[r][c] += delta
    
    # 필수 배치 선처리: 후보가 단 하나인 * 칸의 유일 후보는 무조건 사용
    forced = set()
    changed = True
    while changed:
        changed = False
        for cell in star_cells:
            r, c = cell
            if cover_cnt[r][c] > 0:
                continue
            # 아직 안 덮인 칸의 후보 중 이미 forced에 있으면 덮였어야 함
            # (이미 위에서 처리됨) 안 덮였다면 forced 아닌 후보만 본다
            valid = [pid for pid in cell_candidates[cell] if pid not in forced]
            # forced 배치가 아직 반영 안 된 경우도 있지만, 여기선 이미 apply 했다고 가정
            if len(valid) == 1:
                pid = valid[0]
                forced.add(pid)
                apply_placement(pid, 1)
                changed = True
    
    base_count = len(forced)
    
    # 남은 * 칸을 찾는 효율적인 방법
    def find_uncovered():
        for r in range(N):
            for c in range(M):
                if grid[r][c] == '*' and cover_cnt[r][c] == 0:
                    return (r, c)
        return None
    
    def count_uncovered():
        cnt = 0
        for r in range(N):
            for c in range(M):
                if grid[r][c] == '*' and cover_cnt[r][c] == 0:
                    cnt += 1
        return cnt
    
    INF = 10**9
    best = [INF]
    
    def backtrack(count):
        if count >= best[0]:
            return
        target = find_uncovered()
        if target is None:
            best[0] = count
            return
        # 하한 가지치기
        remaining = count_uncovered()
        lower = (remaining + 4) // 5
        if count + lower >= best[0]:
            return
        
        # target을 덮는 후보들 중 아직 미사용 배치만
        cands = [pid for pid in cell_candidates[target] if pid not in forced]
        if not cands:
            return
        
        for pid in cands:
            apply_placement(pid, 1)
            backtrack(count + 1)
            apply_placement(pid, -1)
    
    backtrack(base_count)
    print(best[0] if best[0] < INF else -1)

main()