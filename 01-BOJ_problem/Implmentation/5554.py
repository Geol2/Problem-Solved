import math

A = int(input())
B = int(input())
C = int(input())
D = int(input())

sum = A + B + C + D
divide = int(math.floor(sum / 60))
other = sum - 60 * divide

print(divide)
print(other)