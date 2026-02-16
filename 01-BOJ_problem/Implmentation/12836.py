N, Q = map(int, input().split())

arr = []
for i in range(N):
    arr.append(0);

for i in range(0, Q):
    selected, after, value = map(int, input().split())

    if selected == 1:
        arr[after - 1] += value
    elif selected == 2:
        result = 0
        a = after - 1
        b = value
        for j in range(a, b):
            result += arr[j]
        print(result)