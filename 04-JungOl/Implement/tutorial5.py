N = int(input())

arr = set(map(int, input().split()))
M = int(input())

for i in range(M):
    a, b, c = map(int, input().split())
    if a == 1:
        arr[b - 1] = c
    elif a == 2:
        print(sum(arr[b-1:c]))
    
