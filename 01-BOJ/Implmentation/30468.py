STR, DEX, INT, LUK, N = map(int, input().split())
need_blessing = max(0, 4 * N - (STR + DEX + INT + LUK))
print(need_blessing)