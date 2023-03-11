# 정렬

1. 선택 정렬
    - 주어진 리스트 중에 최소값을 찾는다.
    - 그 값을 맨 앞에 위치한 값과 교체한다(패스(pass)).
    - 맨 처음 위치를 뺀 나머지 리스트를 같은 방법으로 교체한다.

    ## 특징
    - 열에서 해당 자리를 이미 선택하고 그 자리에 오는 값을 찾는 것
    - 단순한 알고리즘이고 제한적인 메모리 사용일 경우, 적합한 알고리즘이다
    - 입력 크기가 작을 때는 괜찮지만, 입력 크기가 커질수록 비효율적
    
    최선, 평균, 최악의 경우일 때에 선택 정렬에 소요되는 비교의 횟수를 $C$ 라고 했을 때, 이를 수식으로 나타내면 다음과 같다.

    $C_{min} = C_{avg} = C_{max} = \displaystyle\sum_{i=1}^{N-1} N-i = \frac{N(N-1)}{2} = O(n^2)$

    ## 수도 코드
    ```
    for i = 0 to n:
        a[i]부터 a[n - 1]까지 차례로 비교하여 가장 작은 값이 a[j]에 있다고 하자.
        a[i]와 a[j]의 값을 서로 맞바꾼다.
    ```

    ## 구현 코드
    ```python
    needSort = [1, 5, 9, 8, 4, 7]

    def selectionSort(x):
    length = len(x)
    for i in range(length - 1):
        indexMin = i
        for j in range(i + 1, length):
            if x[indexMin] > x[j]:
                indexMin = j
        x[i], x[indexMin] = x[indexMin], x[i]
    return x

    print(selectionSort(needSort))
    ```

2. 퀵 정렬
    - 피벗을 기준으로 정렬된다

    ## 파트
    1. 리스트 가운데서 하나의 원소를 고른다. 이렇게 고른 원소를 피벗이라고 한다.
    2. 피벗 앞에는 피벗보다 값이 작은 모든 원소들이 오고, 피벗 뒤에는 피벗보다 값이 큰 모든 원소들이 오도록 피벗을 기준으로 리스트를 둘로 나눈다. 이렇게 리스트를 둘로 나누는 것을 분할이라고 한다. 분할을 마친 뒤에 피벗은 더 이상 움직이지 않는다.
    3. 분할된 두 개의 작은 리스트에 대해 재귀(Recursion)적으로 이 과정을 반복한다. 재귀는 리스트의 크기가 0이나 1이 될 때까지 반복된다.

    ## 특징
    - 최악의 경우에는 $O(n^{2})$ 번의 비교를 수행하고, 평균적으로 $O(n * \log(n))$ 번의 비교를 수행한다

    ```python
    needSort = [1, 5, 9, 8, 4, 7]

    def quicksort(x):
        if len(x) <= 1:
            return x

        pivot = x[len(x) // 2]
        less = []
        more = []
        equal = []
        for a in x:
            if a < pivot:
                less.append(a)
            elif a > pivot:
                more.append(a)
            else:
                equal.append(a)

        return quicksort(less) + equal + quicksort(more)

    print( quicksort(needSort) )
    ```

3. 버블 정렬
    - 만약 그 두 수가 정렬되었다면 놔두고 아니라면 두 수를 바꾸는 방식으로 진행된다.
    - 오름차순으로 정렬할 때는 $a < b$, 내림차순이라면 $a > b$ 여야 정렬된 것으로 판단한다.
    - 이를 배열의 처음부터 끝까지 반복한다.
    
    ## 특징
    - 시간 복잡도 $O(n^{2})$ 로 상당히 느리지만, 코드가 단순하기 때문에 자주 사용된다

    ```python
    needSort = [1, 5, 9, 8, 4, 7]

    def isSort():
        for i in range(len(needSort) - 1):
            if needSort[i] > needSort[i + 1]:
                return False;
        return True

    def sort(needSort):
        flag = isSort()
        if flag:
            for i in range(len(needSort)):
                for j in range(i + 1, len(needSort)):
                    if(needSort[i] > needSort[j]):
                    tmp = needSort[i]
                    needSort[i] = needSort[j]
                    needSort[j] = tmp
        return needSort

    print( sort(needSort) )
    ```

4. 삽입 정렬

    - 배열의 모든 요소를 앞에서부터 차례대로 이미 정렬된 배열 부분과 비교하여 자신의 위치를 찾아 삽입

    ## 특징
    - 시간 복잡도 $O(n^{2})$ 로 선택 정렬과 비슷하지만, 최선의 경우 $O(n)$ 을 가진다
    - 데이터가 거의 정렬되어 있을 때, 사용하면 효율적이다

    ```python
    needSort = [1, 5, 9, 8, 4, 7]

    def sort(needSort):
        for i in range(1, len(needSort)):
            for j in range(i, 0, -1):
                if needSort[j] < needSort[j-1]:
                    needSort[j] = needSort[j-1]
                    needSort[j-1] = needSort[j]
                else:
                    break;
    
    print( sort(needSort) )
    ```

5. 계수 정렬
    - 특정한 조건이 부합할 때만 사용할 수 있는 빠른 정렬 알고리즘
    
    ```python
    needSort = [1, 5, 9, 8, 4, 7]

    count = [0] * (max(needSort) + 1)

    for i in range(len(needSort)):
        count[needSort[i]] += 1

    for i in range(len(count)):
        for j in range(count[i]):
            print(i, end=' ')
    ```
6. 정렬 라이브러리 기본 예제