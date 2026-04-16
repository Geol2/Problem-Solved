T = int(input())

for t in range(T):
    days = int(input())
    
    total_ = []
    for day in range(days):
        A, B, C = map(int, input().split())
        
        if A > 0 and A >= B and A >= C:
            total_.append(A)
        elif B > 0 and B >= C and B >= A:
            total_.append(B)
        elif C > 0 and C >= A and C >= B:
            total_.append(C)

    result = 0
    for i in total_:
        result += i

    print(result)