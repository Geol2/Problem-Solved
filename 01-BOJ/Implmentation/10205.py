K = int(input())

for i in range(K):
    H = int(input())
    data = input()

    for j in range(len(data)):
        if data[j] == "c":
            H = H + 1
        elif data[j] == "b":
            H = H - 1
        
        if H < 0:
            H = 0
    
    print("Data Set " + str(i + 1) + ":")
    print(H)
    if i < K - 1:
        print()