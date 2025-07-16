import sys
from collections import Counter

N = int(input())

def get_mode_baekjoon_style(numbers):
  counter = Counter(numbers)
  max_count = max(counter.values())
  
  # 최대 빈도를 가진 값들을 리스트로 수집
  modes = [num for num, count in counter.items() if count == max_count]
  modes.sort()
  
  # 최빈값이 여러 개면 두 번째로 작은 값, 아니면 그 값
  return modes[1] if len(modes) > 1 else modes[0]

arr = []
for _ in range(N):
  numbers = int(sys.stdin.readline())
  arr.append(numbers)

print(round(sum(arr) / N))  # 산술평균
print(sorted(arr)[N // 2])  # 중앙값
print(get_mode_baekjoon_style(arr))  # 최빈값
print(max(arr) - min(arr))  # 범위