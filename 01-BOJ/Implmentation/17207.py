A = []
for _ in range(5):
    row = list(map(int, input().split()))
    A.append(row)

B = []
for _ in range(5):
    row = list(map(int, input().split()))
    B.append(row)

total_person_work = [0] * 5

for person in range(5):
    for work in range(5):
        expected_work = 0

        for i in range(5):
            expected_work += A[person][i] * B [i][work]
        
        total_person_work[person] += expected_work
    
min_work = total_person_work[0]
answer = 0

for i in range(5):
    if total_person_work[i] <= min_work:
        min_work = total_person_work[i]
        answer = i

names = ["Inseo", "Junsuk", "Jungwoo", "Jinwoo", "Youngki"]
print(names[answer])