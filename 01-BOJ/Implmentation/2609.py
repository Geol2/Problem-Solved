import math

N, M = map(int, input().split())
g = math.gcd(N, M)
l = math.lcm(N, M)

print(g)
print(l)
