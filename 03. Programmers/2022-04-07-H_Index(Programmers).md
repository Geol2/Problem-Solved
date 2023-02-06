---
title: "H-Index"
categories:
  - Programmers
  - Algorithm
tags:
  - Programmers
last_modified_at: 2022-03-27T09:00:00-14:00:00
---

# H-Index

## 문제 설명
- H-Index는 과학자의 생산성과 영향력을 나타내는 지표입니다. 
- 어느 과학자의 H-Index를 나타내는 값인 `h`를 구하려고 합니다. 
- [위키백과 H-Index](https://en.wikipedia.org/wiki/H-index)에 따르면, H-Index는 다음과 같이 구합니다.

- 어떤 과학자가 발표한 논문 `n`편 중, `h`번 이상 인용된 논문이 `h`편 이상이고 나머지 논문이 `h`번 이하 인용되었다면 `h`의 최댓값이 이 과학자의 H-Index입니다.

- 어떤 과학자가 발표한 논문의 인용 횟수를 담은 배열 `citations`가 매개변수로 주어질 때, 이 과학자의 H-Index를 return 하도록 solution 함수를 작성해주세요.

## 제한사항

- 과학자가 발표한 논문의 수는 1편 이상 1,000편 이하입니다.
- 논문별 인용 횟수는 0회 이상 10,000회 이하입니다.

## 입출력 예

|     citations  	|   return   |
|:-----------------:|:----------:|
|  [3, 0, 6, 1, 5]  |   	3    |

## 입출력 예 설명

- 이 과학자가 발표한 논문의 수는 5편이고, 그중 3편의 논문은 3회 이상 인용되었습니다. 그리고 나머지 2편의 논문은 3회 이하 인용되었기 때문에 이 과학자의 `H-Index`는 3입니다.

```c++
#include <algorithm>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution
{
public:
	vector<int> citations;
	int answer = 0;
	
	int findH()
	{
		
		for (int i = 0; i < citations.size(); i++) {
			if (i < citations[i]) this->answer++;
			else break;
		}

		return this->answer;
	}

	void init(const vector<int> citations)
	{
		this->citations = citations;
		sort(this->citations.begin(), this->citations.end(),greater<int>() );
	}
};

int solution(vector<int> citations) {
    int answer = 0;

	Solution sol;
	sol.init(citations);
	answer = sol.findH();
	
    return answer;
}

int main(void)
{
	vector<int> citations = { 3, 0, 6, 1, 5 };

	solution(citations);
	
	return 0;
}

```

## 수식

- `H-Index`에 대한 예시가 나와있음
- 연구자의 연구영향력을 평가하기 위한 지표인데, 논문수와 피인용횟수를 바탕으로 개인의 업적을 평가하기엔 어려움이 있다고 한다

```markdown
f(A)=10, f(B)=8, f(C)=5, f(D)=4, f(E)=3　→ h-index=4
f(A)=25, f(B)=8, f(C)=5, f(D)=3, f(E)=3　→ h-index=3
```

$$ f(i) = max \{ i \in N : f(i) \geq i \} $$


## 간단한 풀이

- H-Index의 크기는 `citations`의 크기(제출한 논문 수)만큼

- H-Index : 1
  - 첫번째 논문(6)은 1보다 크거나 같음 `6>=1`(O)
- H-Index : 2
  - 두번째 논문(5)은 2보다 크거나 같음 `5>=2`(O)
- H-Index : 3
  - 세번째 논문(3)은 3보다 크거나 같음 `3>=3`(O)
- H-Index : 4
  - 네번째 논문(1)은 4보다 크거나 같지 않음 `1>=4`(X)
- H-Index : 5
  - 다섯번째 논문(0)은 5보다 크거나 같지 않음 `0>=5` (X)

- 최대값은 `3` 이므로 출력


