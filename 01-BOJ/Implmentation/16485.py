import math

c, b = map(int, input().split())

def floor_to_10_places(n):
    return math.floor(n * 10**10) / 10**10

if c % b == 0:
    print(c // b)
else:
    result = floor_to_10_places(c / b)
    print(f"{result:.10f}", )