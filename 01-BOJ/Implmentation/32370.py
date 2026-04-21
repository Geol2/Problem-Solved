a, b = map(int, input().split())
x, y = map(int, input().split())

r = 2

if a == 0:
    if x != 0:
        r = 1
    elif y < b:
        r = 3
    else:
        r = 1

if b == 0:
    if y != 0:
        r = 1
    elif x < a:
        r = 3
    else:
        r = 1

print(r)