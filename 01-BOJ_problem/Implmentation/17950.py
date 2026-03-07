import sys
input = sys.stdin.readline

H, x = map(int, input().split())

snowball = 0
mountain = []

defend_max_value = 10**9 + 7

for i in range(H):
    make_snow = int(input())
    mountain.append(make_snow)

mountain.reverse()

for i in range(H):
    if i == 0:
        snowball = mountain[i] * x
    else:
        snowball = ((snowball + mountain[i]) * x) % defend_max_value

print(snowball)