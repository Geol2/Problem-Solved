from fractions import Fraction

N = int(input())
arr = list(map(int, input().split()))

reverse_arr = []
reverse_total = Fraction(0)
for i in range(N):
    reverse = Fraction(1, arr[i])
    reverse_arr.append(reverse)
    reverse_total += reverse

re_reverse = Fraction(1, reverse_total)
print(f"{re_reverse.numerator}/{re_reverse.denominator}")
