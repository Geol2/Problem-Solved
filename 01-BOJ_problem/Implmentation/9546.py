import math

T = int(input())

for i in range(T):
    k = int(input())
    
    result = 0
    
    for j in range(k):
        if j == 0:
            result += 1
        else:
            result = math.floor((result + 0.5) * 2)
    
    print(result)




