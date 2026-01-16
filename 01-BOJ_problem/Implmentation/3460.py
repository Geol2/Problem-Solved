import math as math

T = int(input())


for _ in range(T):
    N = int(input())
    arr = []

    while N > 0:
        other = N % 2 # 2로 나눈 나머지
        N = math.floor(N / 2) # 2로 나눈 몫
        arr.append(other) # 배열에 추가
    
    result = []
    for i in range(len(arr)):
        if(arr[i] == 1):
            result.append(str(i))

    print(" ".join(result))