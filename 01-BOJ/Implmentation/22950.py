N = int(input())
M = input()
K = int(input())

# M이 전부 0이면 (M=0) 항상 YES
if all(c == '0' for c in M):
    print("YES")
# 뒤에서 K개가 모두 0인지 확인
elif K == 0:
    print("YES")
elif K > N:
    print("NO")
else:
    tail = M[N-K:]
    if all(c == '0' for c in tail):
        print("YES")
    else:
        print("NO")