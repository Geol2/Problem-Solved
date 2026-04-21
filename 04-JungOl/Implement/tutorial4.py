import sys
input = sys.stdin.readline

N, Q = map(int, input().split())

civil = set(map(int, input().split()))
chief = list(map(int, input().split()))

result = [str(x) for x in chief if x not in civil]

if not result:
    print(-1)
else:
    print(' '.join(result))