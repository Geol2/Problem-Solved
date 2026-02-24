import operator

A = list(input().split())
B = list(input().split())
C = list(input().split())

join_sorted_array = [int(A[1]), int(B[1]), int(C[1])]
join_sorted_array.sort()

dict = {
    A[2]: int(A[0]),
    B[2]: int(B[0]),
    C[2]: int(C[0])
}
sovled_sorted_dict = sorted(dict.items(), key=operator.itemgetter(1), reverse=True)

print(str(join_sorted_array[0])[2:4] + str(join_sorted_array[1])[2:4] + str(join_sorted_array[2])[2:4])
print(sovled_sorted_dict[0][0][0] + sovled_sorted_dict[1][0][0] + sovled_sorted_dict[2][0][0])
