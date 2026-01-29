import math

N = int(input())
for_loop = int(math.floor(N / 4))

type_str = "long "
total_str = ""

if for_loop == 0:
    for_loop = 1

for i in range(for_loop):
    total_str = total_str + type_str

print( total_str + "int")