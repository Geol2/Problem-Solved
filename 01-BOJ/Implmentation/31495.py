S = input()

if len(S) >= 2 and S[0] == '"' and S[-1] == '"':
    inside = S[1:-1]
    if inside and '"' not in inside:
        print(inside)
    else:
        print("CE")
else:
    print("CE")