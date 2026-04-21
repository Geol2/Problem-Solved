import math

L = int(input())
A = int(input())
B = int(input())
C = int(input())
D = int(input())

korean_day = math.ceil(A / C)
math_day = math.ceil(B / D)
max_day = max(korean_day, math_day)

print(L - max_day)