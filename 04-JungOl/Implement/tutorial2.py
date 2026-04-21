N = int(input())

for i in range(N):
    input_num, ch = map(str, input().split())
    num = int(input_num)

    result = ""
    if ch == "X":
        print("EXIT")
        break
    
    for j in range(num):
        result += ch
    print(result)