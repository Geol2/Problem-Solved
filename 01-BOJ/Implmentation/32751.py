is_result = True

N = int(input())

A, B, C, D = map(int, input().split())
use_A, use_B, use_C, use_D = 0, 0, 0, 0

S = list(input())
s_length = len(S)

if S[0] != 'a' or S[s_length - 1] != 'a':
    is_result = False
else:
    for i in range(len(S)):
        if S[i] == 'a':
            use_A += 1
        elif S[i] == 'b':
            use_B += 1
        elif S[i] == 'c':
            use_C += 1
        elif S[i] == 'd':
            use_D += 1
        
        if i < (len(S) - 1) and S[i] == S[i + 1]:
            is_result = False

    if use_A > A or use_B > B or use_C > C or use_D > D:
        is_result = False

if is_result:
    print("Yes")
else:
    print("No")    


