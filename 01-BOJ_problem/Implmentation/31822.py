re_class = str(input())
re_class_code = re_class[0:5]

N = int(input())
count = 0

for _ in range(N):
    target_class = str(input())
    target_class_code = target_class[0:5]
    if(target_class_code == re_class_code):
        count = count + 1

print(count)
