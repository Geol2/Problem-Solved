N = int(input())

arr = list(map(int, input().split()))
odd_arr = [i for i in arr if i % 2 == 1] # 홀
even_arr = [i for i in arr if i % 2 == 0] # 짝

even_arr.sort()
odd_arr.sort()

odd_position = (N + 1) // 2
even_position = N // 2

if len(odd_arr) == odd_position and len(even_arr) == even_position:
    print("1")
else:
    print("0")