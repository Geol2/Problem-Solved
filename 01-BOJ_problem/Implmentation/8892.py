T = int(input())

solution = 0
isPelindom = False

def isSyme(left, right, totalLen):
    roop = totalLen // 2
    for i in range(roop):
        if left[i] != right[len(right) - i - 1]:
            return False
    
    return True

for i in range(T):
    solution = 0
    isPelindom = False

    arr = []
    k = int(input())
    for j in range(k):
        center = 0
        S = input()
        arr.append(S)

    for j in range(0, k):
        if isPelindom:
            break
        for l in range(0, k):
            if l == j:
                continue

            pelindrom = arr[j] + arr[l]
            center = len(pelindrom) // 2

            left = pelindrom[0:center]
            right = pelindrom[center:len(pelindrom)] # 짝
            if len(pelindrom) % 2 == 1: # 홀
                right = pelindrom[center+1:len(pelindrom)]
            totalLen = len(pelindrom)
            isPelindom = isSyme(left, right, totalLen)

            if pelindrom == pelindrom[::-1]:
                solution = pelindrom
                isPelindom = True
                break
    
    print(solution)