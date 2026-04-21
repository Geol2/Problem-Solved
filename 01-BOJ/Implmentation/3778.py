N = int(input())

def my_count(A, B):
    count = 0

    for ch in set(A) | set(B):
        count += abs(A.get(ch, 0) - B.get(ch, 0))

    return count

for i in range(N):
    count = 0
    A = input()
    A_dict = {}
    B = input()
    B_dict = {}

    for ch in A:
        if ch in A_dict:
            A_dict[ch] += 1
        else:
            A_dict[ch] = 1
    
    for ch in B:
        if ch in B_dict:
            B_dict[ch] += 1
        else:
            B_dict[ch] = 1

    count = my_count(A_dict, B_dict)

    print("Case #" + str(i + 1) + ": " + str(count))

    