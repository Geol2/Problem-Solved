N = int(input())

ch = "@"
print(ch * N + ch * 2)
for i in range(N):
    print(ch + (" " * N) + ch)
print(ch * N + ch * 2)