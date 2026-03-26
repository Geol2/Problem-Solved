N = int(input())
P = int(input())

prices = [P]

if N >= 5:
    prices.append(P - 500)
if N >= 10:
    prices.append(P - P // 10)
if N >= 15:
    prices.append(P - 2000)
if N >= 20:
    prices.append(P - P // 4)

print(max(0, min(prices)))