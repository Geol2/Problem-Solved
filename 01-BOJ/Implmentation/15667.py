import math

N = int(input())

discriminant = 4 * N - 3
K = (-1 + math.isqrt(discriminant)) // 2

print(K)