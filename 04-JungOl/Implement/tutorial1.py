A = float(input())
B, C = map(str, input().split())

print("{:.3f}".format(round(A, 3)))
print("{0} {1}".format(B, C))