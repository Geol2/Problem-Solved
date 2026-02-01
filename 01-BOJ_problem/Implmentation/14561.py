import math

T = int(input())

temp = []

def isPalindrome(arr):
    length = len(arr)
    center = math.floor(length / 2)
    for i in range(0, length):
        if i < center and temp[i] != temp[length  - i - 1]:
            # 두개가 같지 않다면 걍 아님..
            return 0
    
    return 1

for i in range(T):
    A, n = map(int, input().split())

    while True:
        if A >= n:
            divide = int(math.floor(A / n))
            other = A % n
            A = int(math.floor(A / n))
            temp.append(other)
        else :
            # 최종 마지막에서 확인
            other = A % n
            temp.append(other)
            # 회문 확인
            isPalidromed = isPalindrome(temp)
            print(isPalidromed)
            temp = []
            break