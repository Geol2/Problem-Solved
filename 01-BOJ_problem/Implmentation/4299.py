import math

A, B = map(int, input().split())

x = int((A + B) / 2)
y = int((A - B) / 2)

if ((A + B) % 2) != 0 or ((A - B) % 2) != 0 or x < 0 or y < 0:
    print(-1)
else:
    print(str(x) + " " + str(y))

