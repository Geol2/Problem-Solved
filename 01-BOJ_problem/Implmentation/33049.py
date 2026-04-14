P3, P4, P0 = map(int, input().split())

total = P3 + P4 + P0

found = False
best_t3 = float('inf')
best_t4 = -1

# t4를 역순으로 순회 (큰 것부터) → t3 최소화
for t4 in range(total // 4, -1, -1):
    remaining = total - 4 * t4
    if remaining % 3 == 0:
        t3 = remaining // 3
        # P3가 3*t3명 이하이고, P4가 4*t4명 이하인지 확인
        if P3 <= 3 * t3 and P4 <= 4 * t4:
            print(t3, t4)
            found = True
            break

if not found:
    print(-1)