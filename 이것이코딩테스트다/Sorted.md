# 정렬

1. 선택 정렬
    - 주어진 리스트 중에 최소값을 찾는다.
    - 그 값을 맨 앞에 위치한 값과 교체한다(패스(pass)).
    - 맨 처음 위치를 뺀 나머지 리스트를 같은 방법으로 교체한다.

    ## 특징
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
5. 계수 정렬
6. 정렬 라이브러리 기본 예제