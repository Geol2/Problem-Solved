N = int(input())

count = 0
for i in range(N):
    x = input()
    explode = x.split("-")
    
    day = int(explode[1])
    if day <= 90:
        count = count + 1
    
print(count)