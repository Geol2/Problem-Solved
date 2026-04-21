N = int(input())
current = int(input())
total = 0

for i in range(N):
    A = int(input())
    
    clockwise = (A - current) % 360
    counter_clockwise = (current - A) % 360
    total += min(clockwise, counter_clockwise)

    current = A

print(total)