for n in range(10, 100):
    s = str(n)
    rev = int(s[::-1])
    digit_sum = sum(int(c) for c in s)
    
    if rev % 4 == 0 and digit_sum % 6 == 0 and '8' not in s:
        print(n)
        break