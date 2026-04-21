N = int(input())
count = 0

def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

result = factorial(N)
resultStr = list(str(result))
for i in range(len(resultStr) - 1, 0, -1):
    if resultStr[i] == '0':
        count += 1
    else :
        break
    
print(count)