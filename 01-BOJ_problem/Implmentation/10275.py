t = int(input())

def count_ones_in_binary(num):
    count = 0
    while num > 0:
        if num % 2 == 1:
            count += 1
        num //= 2
    return count

for _ in range(t):
    n, a, b = map(int, input().split())
    result = count_ones_in_binary(a) + count_ones_in_binary(b) - 1
    print(result)