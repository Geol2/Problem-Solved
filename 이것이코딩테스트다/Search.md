# 탐색

## 순차 탐색

특정 데이터를 찾기 위해서 앞에서부터 데이터를 하나씩 탐색

```python
def sequential_search(n, target, array):
    for i in range(n):
        if(array[i] == target):
            return i + 1;

print("생성할 원소 개수를 입력하고 찾을 문자열도 같이 입력하세요.")
input_data = input().split()
n = int(input_data[0])
target = input_data[1]

print("원소 개수만큼의 데이터를 한 칸씩 띄어쓰기를 이용해서 입력하세요.")
array = input().split()

print( sequential_search(n, target, array) )
```

## 이진 탐색

찾으려는 데이터와 중간점 위치에 있는 데이터를 반복적으로 비교해서 원하는 데이터를 찾는 과정이다

시간 복잡도 : $O(logN)$

1. 재귀
2. 반복문

### 재귀
```python
def binary_search(array, target, start, end):
    if start > end:
        return None
    mid = (start + end) // 2
    if array[mid] == target:
        return mid
    elif array[mid] > target:
        return binary_search(array, target, start, mid - 1)
    else:
        return binary_search(array, target, start, mid + 1)

n, target = list( map(int, input().split()) )
array = list( map(int, input().split()) )

result = binary_search(array, target, 0, n - 1)
if result == None:
    print("원소가 존재하지 않습니다.")
else:
    print(result + 1)
```

### 반복문
```python
def binary_search(array, target, start, end):
    while start <= end:
        mid = (start + end) // 2
        if array[mid] == target:
            return mid
        elif array[mid] > target:
            end = mid - 1
        else:
            start = mid + 1
    return None

n, target = list( map(int, input().split()) )
array = list( map(int, input().split()) )

result = binary_search(array, target, 0, n - 1)
if result == None:
    print("원소가 존재하지 않습니다.")
else:
    print(result + 1)
```