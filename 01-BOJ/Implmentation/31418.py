import sys
input = sys.stdin.readline

W, H, K, T = map(int, input().split())

MOD = 998244353
result = 1

for i in range(K):
    x, y = map(int, input().split())

    x_min = max(1, x - T)
    x_max = min(W, x + T)
    y_min = max(1, y - T)
    y_max = min(H, y + T)

    possible = (x_max - x_min + 1) * (y_max - y_min + 1)
    result = (result * possible) % MOD

print(result)


# import sys

# data = sys.stdin.read().split()
# idx = 0

# W = int(data[idx])
# H = int(data[idx + 1])
# K = int(data[idx + 2])
# T = int(data[idx + 3])
# idx += 4

# MOD = 998244353
# result = 1

# for i in range(K):
#     x = int(data[idx])
#     y = int(data[idx + 1])
#     idx += 2
    
#     possible = (min(W, x + T) - max(1, x - T) + 1) * \
#                (min(H, y + T) - max(1, y - T) + 1)
#     result = (result * possible) % MOD

# print(result)




# import gc; gc.disable()

# def solve_xc_yc(W, H, T, V):
#     return pow(W*H, len(V), 998244353)

# def solve_xc_yv(W, H, T, V):
#     if 2*T+1 <= H: ya, yb, yc = T+1, H-T+1, 2*T+1
#     else: ya, yb, yc = H-T, T+2, H
#     yd = H+T+1
    
#     m = pow(W, len(V), 998244353)
#     myc = 0
    
#     for v in V:
#         _, y = map(int, v.split())
#         if y < ya: m = m*(y+T)%998244353
#         elif y >= yb: m = m*(yd-y)%998244353
#         else: myc += 1
        
#     return (m * pow(yc, myc, 998244353))%998244353

# def solve_xv_yc(W, H, T, V):
#     if 2*T+1 <= W: xa, xb, xc = T+1, W-T+1, 2*T+1
#     else: xa, xb, xc = W-T, T+2, W
#     xd = W+T+1
    
#     m = pow(H, len(V), 998244353)
#     mxc = 0
    
#     for v in V:
#         x, _ = map(int, v.split())
#         if x < xa: m = m*(x+T)%998244353
#         elif x >= xb: m = m*(xd-x)%998244353
#         else: mxc += 1
        
#     return (m * pow(xc, mxc, 998244353))%998244353

# def solve_xv_yv(W, H, T, V):
#     if 2*T+1 <= W: xa, xb, xc = T+1, W-T+1, 2*T+1
#     else: xa, xb, xc = W-T, T+2, W
#     xd = W+T+1
    
#     if 2*T+1 <= H: ya, yb, yc = T+1, H-T+1, 2*T+1
#     else: ya, yb, yc = H-T, T+2, H
#     yd = H+T+1

#     m = 1
#     mxc = myc = 0
    
#     for v in V:
#         x, y = map(int, v.split())
        
#         if x < xa: m = m*(x+T)%998244353
#         elif x >= xb: m = m*(xd-x)%998244353
#         else: mxc += 1
        
#         if y < ya: m = m*(y+T)%998244353
#         elif y >= yb: m = m*(yd-y)%998244353
#         else: myc += 1

#     return (m * pow(xc, mxc, 998244353) * pow(yc, myc, 998244353))%998244353

# def solve(W, H, T, V):
#     if W < T+2:
#         if H < T+2: return solve_xc_yc(W, H, T, V)
#         else: return solve_xc_yv(W, H, T, V)
#     elif H < T+2:
#         return solve_xv_yc(W, H, T, V)
#     else:
#         return solve_xv_yv(W, H, T, V)

# WHKT, *V = open(0, mode='rb')
# W, H, K, T = map(int, WHKT.split())

# print(solve(W, H, T, V))