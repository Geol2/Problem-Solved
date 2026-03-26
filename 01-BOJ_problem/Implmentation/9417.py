import math

T = int(input())

for i in range(T):
    max_gcd = 0
    test = list(map(int, input().split()))

    for j in range(len(test)):
        for k in range(j + 1, len(test)):
            gcd = math.gcd(test[j], test[k])
            if gcd > max_gcd:
                max_gcd = gcd
    
    print(max_gcd)