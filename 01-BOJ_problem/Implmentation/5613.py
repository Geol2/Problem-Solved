num = []
oper = ""
total = 1
cnt = 1

s = int(input())
num.append(s)

oper = input()

s = int(input())
num.append(s)

if oper == "*":
    total = num[0] * num[1]
elif oper == "/":
    total = num[0] // num[1]
elif oper == "-":
    total = num[0] - num[1]
elif oper == "+":
    total = num[0] + num[1]
 
num.pop()
num.pop()

while True:
    oper = input()
    if oper == "=":
        break

    s = int(input())
    num.append(s)

    if oper == "*":
        total *= num[0]
    elif oper == "/":
        total //= num[0]
    elif oper == "-":
        total -=  num[0]
    elif oper == "+":
        total += num[0]

    num.pop()

print(total)