T = int(input())

for i in range(T):
  N, M = map(int, input().split())
  weight = list(enumerate(list(map(int, input().split()))))
  result = 0
  v = weight[M]

  while (len(weight)):
    maxWeight = max([w[1] for w in weight]) # 현재 대기열에서 가장 높은 우선순위

    if weight[0][1] == maxWeight: # 우선순위가 가장 높은 경우
      now = weight.pop(0)         # 가장 앞에 있는 원소를 꺼냄
      result += 1                 # 카운트 증가
      if now == v:                # 꺼낸 원소가 우리가 찾는 원소인 경우
        print(result)             # 카운트 출력
        break
    else:                 # 우선순위가 가장 높은 원소가 아닌 경우
      now = weight.pop(0) # 가장 앞에 있는 원소를 꺼냄
      weight.append(now)  # 가장 뒤에 추가