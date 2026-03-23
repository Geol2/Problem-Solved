import math

R, C, N = map(int, input().split())

a = int(math.ceil(C / N))
b = int(math.ceil(R / N))

print(a * b)