import math

N = int(input())
if N > 0 :
    print(math.ceil(round(math.log(N, 2), 10)) + 1)
else :
    print(0)