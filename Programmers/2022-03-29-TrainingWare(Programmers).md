---
title: "체육복"
categories:
  - Programmers
  - Algorithm
tags:
  - Programmers
last_modified_at: 2022-03-29T09:00:00-14:00:00
---

# 그리디 (탐욕법)
- 현재 가장 최적인 답을 관찰을 통해 탐색 범위를 줄이는 알고리즘
- 탐색 범위를 줄여도 올바른 결과를 낸다는 사실을 그럴싸하기보단 **수학적**으로 증명하는 것이 좋다

## 단점
- 관찰을 통해 잘못된 방법을 고안해서 구현하였으나 계속 틀린다. 틀릴 시, 빠르게 손절하고 다른 방법을 찾는 것이 좋다

-----

# 귀류법
- 명제가 거짓이라고 가정할 때, 모순이 발생함을 보이는 증명법

## 귀류법 예시

### 동전 
- [백준 11047번](https://www.acmicpc.net/problem/11047)
- 명제 1 : 동전을 최소로 소모하면서 물건값을 지불하려면, 10/100원 동전은 4개 이하로 50원 동전은 1개 이하로 사용하면 된다
- 명제 1이 거짓임을 가정(귀류법)
  - 가정 : 10/100원 동전을 5개 이상, 50원 동전을 2개 이상 동전을 최소로 소모할 수 있다
  - 10/100원 동전을 5개 이상 사용 시, 50/500원 동전으로 대체하면 되고 50원 동전을 2개 이상 사용하면 100원 동전으로 대체하면 동전을 더 줄일 수 있으므로 가정은 거짓이 되므로 정리 1은 `참`이 된다

#### 명제
- 동전을 최소로 소모하면서 물건값을 지불하려면 500원 동전을 최대한 많이 써야 한다

#### 증명
- 10, 50, 100원 동전으로는 물건값을 최대 `10*4 + 50*1 +100x4 = 490원`만 감당 가능하다
- 500원 동전을 다 사용하지 않을 경우, 10, 50, 100원 동전으로 500원 이상 감당해야함
- 500/100/50/10 을 순서대로 최대한 많이 사용해야한다.

-----

### 회의실 배정
- [백준 1931번](https://www.acmicpc.net/problem/1931)

#### 방법 1 : `O(2^n)`
-  : 모든 가능한 배정 방법을 확인 (무식)

#### 방법 2 : `O(N^2)`
- 회의를 끝나는 시간이 빠른 순으로, 끝나는 시간이 같다면 시작 시간이 빠른 순으로 정렬 (동적 프로그래밍)
- `D[i] = i`번째 회의를 마지막으로 진행했을 때 최대 회의의 수
- `D[i] = max(D[j]) + 1`(j번째 회의의 끝나는 시간이 i번째 회의의 시작 시간 이하인 모든 j)

-----

# 체육복
## 문제 설명
- 점심시간에 도둑이 들어, 일부 학생이 체육복을 도난당했습니다. 다행히 여벌 체육복이 있는 학생이 이들에게 체육복을 빌려주려 합니다. 
- 학생들의 번호는 체격 순으로 매겨져 있어, 바로 앞번호의 학생이나 바로 뒷번호의 학생에게만 체육복을 빌려줄 수 있습니다. 
- 예를 들어, 4번 학생은 3번 학생이나 5번 학생에게만 체육복을 빌려줄 수 있습니다.  체육복이 없으면 수업을 들을 수 없기 때문에 체육복을 적절히 빌려 최대한 많은 학생이 체육수업을 들어야 합니다.

- 전체 학생의 수 `n`, 체육복을 도난당한 학생들의 번호가 담긴 배열 `lost`, 여벌의 체육복을 가져온 학생들의 번호가 담긴 배열 `reserve`가 매개변수로 주어질 때, 체육수업을 들을 수 있는 학생의 최댓값을 return 하도록 solution 함수를 작성해주세요.

## 제한사항
- 전체 학생의 수는 2명 이상 30명 이하입니다.
- 체육복을 도난당한 학생의 수는 1명 이상 n명 이하이고 중복되는 번호는 없습니다.
- 여벌의 체육복을 가져온 학생의 수는 1명 이상 n명 이하이고 중복되는 번호는 없습니다.
- 여벌 체육복이 있는 학생만 다른 학생에게 체육복을 빌려줄 수 있습니다.
- 여벌 체육복을 가져온 학생이 체육복을 도난당했을 수 있습니다. 이때 이 학생은 체육복을 하나만 도난당했다고 가정하며, 남은 체육복이 하나이기에 다른 학생에게는 체육복을 빌려줄 수 없습니다.

## 입출력 예

|n	|	lost    |	reserve | return |
|:-:|:---------:|:---------:|:------:|
|5	| [2, 4]	| [1, 3, 5]	| 5      |
|5	| [2, 4]	| [3]	    | 4      |
|3	| [3]	    | [1]	    | 2      |

## 입출력 예 설명
### 예제 #1
1번 학생이 2번 학생에게 체육복을 빌려주고, 3번 학생이나 5번 학생이 4번 학생에게 체육복을 빌려주면 학생 5명이 체육수업을 들을 수 있습니다.

### 예제 #2
3번 학생이 2번 학생이나 4번 학생에게 체육복을 빌려주면 학생 4명이 체육수업을 들을 수 있습니다.

### 명제
- 여벌 학생 수를 기준으로 좌우를 탐색해서 체육복이 없는 학생에게 준다면 최적의 해를 구할 수 있다.

### 풀이
```c++
#include <vector>
#include <map>
#include <iostream>

using namespace std;

class Solution
{
public:
	vector<pair<int, int>> student;

	void init(int n)
	{
		student.emplace_back(make_pair(0, 0));
		for (int i = 1; i <= n; i++)
		{
			student.emplace_back(make_pair(i, 1));
		}
		student.emplace_back(make_pair(n + 1, 0));
	}

	void setLost(vector<int> lost)
	{
		int lostCnt = 0;
		for (int i = 0; i < lost.size(); i++)
		{

			if (student.at(lost[i]).second == 2)
			{
				student.at(lost[i]).second = 1;
				continue;
			}
			student.at(lost[i]).second = lostCnt;
		}
	}

	void setPlus(vector<int> reserve)
	{
		int plusCnt = 2;
		for (int i = 0; i < reserve.size(); i++)
		{
			if (student.at(reserve[i]).second == 0)
			{
				continue;
			}

			student.at(reserve[i]).second = plusCnt;
		}
	}

	int Greedy(int n)
	{
		for (int i = 1; i <= n; i++)
		{
			const int next = i + 1;
			const int prev = i - 1;
			
			if (student.at(i).second == 0 && student.at(prev).second == 2)
			{
				student.at(i).second = 1;
				student.at(prev).second = 1;
			} else if (student.at(i).second == 0 && student.at(next).second == 2)
			{
				student.at(i).second = 1;
				student.at(next).second = 1;
			}
		}

		int cnt = 0;
		for (int i = 1; i <= n; i++)
		{
			if (student.at(i).second > 0)
			{
				cnt++;
			}
		}

		return cnt;
	}
};

int solution(int n, vector<int> lost, vector<int> reserve)
{
	int answer = 0;

	Solution sol;
	sol.init(n);
	sol.setPlus(reserve);
	sol.setLost(lost);
	answer = sol.Greedy(n);
	cout << answer << endl;

	return answer;
}

int main(void)
{
	int n1 = 5;
	int n2 = 5;
	int n3 = 3;

	vector<int> lost1 = {2, 4};

	vector<int> reserve1 = {1, 3, 5};

	vector<int> lost2 = {2, 4};

	vector<int> reserve2 = {3};

	vector<int> lost3 = {3};

	vector<int> reserve3 = {1};

	/*int n = 5;
	vector<int> lost = {2, 4};
	vector<int> reserve = {3};*/ // 정답 4
	int n = 3;
	vector<int> lost = { 1, 2 };
	vector<int> reserve = { 2, 3};

	solution(n, lost, reserve);

	return 0;
}
```