N = int(input())
milk_info = list(map(int, input().split()))

drink_count = 0
next_milk = 0  # 0: 딸기, 1: 초코, 2: 바나나

for i in range(N):
    if milk_info[i] == next_milk:
        drink_count += 1
        next_milk = (next_milk + 1) % 3  # 0→1→2→0 순환

print(drink_count)