---
title: "키패드 누르기"
categories:
  - Programmers
  - Algorithm
tags:
  - Programmers
last_modified_at: 2022-03-17T09:00:00-14:00:00
---

## 키패드 누르기

- 스마트폰 전화 키패드의 각 칸에 다음과 같이 숫자들이 적혀 있습니다.

- 이 전화 키패드에서 왼손과 오른손의 엄지손가락만을 이용해서 숫자만을 입력하려고 합니다.
- 맨 처음 왼손 엄지손가락은 \* 키패드에 오른손 엄지손가락은 # 키패드 위치에서 시작하며, 엄지손가락을 사용하는 규칙은 다음과 같습니다.

- 엄지손가락은 상하좌우 4가지 방향으로만 이동할 수 있으며 키패드 이동 한 칸은 거리로 1에 해당합니다.
  왼쪽 열의 3개의 숫자 1, 4, 7을 입력할 때는 왼손 엄지손가락을 사용합니다.
  오른쪽 열의 3개의 숫자 3, 6, 9를 입력할 때는 오른손 엄지손가락을 사용합니다.
  가운데 열의 4개의 숫자 2, 5, 8, 0을 입력할 때는 두 엄지손가락의 현재 키패드의 위치에서 더 가까운 엄지손가락을 사용합니다.
  4-1. 만약 두 엄지손가락의 거리가 같다면, 오른손잡이는 오른손 엄지손가락, 왼손잡이는 왼손 엄지손가락을 사용합니다.
  순서대로 누를 번호가 담긴 배열 numbers, 왼손잡이인지 오른손잡이인 지를 나타내는 문자열 hand가 매개변수로 주어질 때, 각 번호를 누른 엄지손가락이 왼손인 지 오른손인 지를 나타내는 연속된 문자열 형태로 return 하도록 solution 함수를 완성해주세요.

[제한사항]

- numbers 배열의 크기는 1 이상 1,000 이하입니다.
  numbers 배열 원소의 값은 0 이상 9 이하인 정수입니다.
  hand는 "left" 또는 "right" 입니다.
- "left"는 왼손잡이, "right"는 오른손잡이를 의미합니다.
- 왼손 엄지손가락을 사용한 경우는 L, 오른손 엄지손가락을 사용한 경우는 R을 순서대로 이어붙여 문자열 형태로 return 해주세요.

### 입출력 예

|               입력                | 손잡이  |     출력      |
| :-------------------------------: | :-----: | :-----------: |
| [1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5] | "right" | "LRLLLRLLRRL" |
| [7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2] | "left"  | "LRLLRRLLLRR" |
|  [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]   | "right" | "LLRLLRLLRL"  |

### 입출력 예에 대한 설명

#### 입출력 예 #1

순서대로 눌러야 할 번호가 [1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5]이고, 오른손잡이입니다.

왼손 위치 오른손 위치 눌러야 할 숫자 사용한 손 설명

- \# 1 L 1은 왼손으로 누릅니다.
- 1 # 3 R 3은 오른손으로 누릅니다.
- 1 3 4 L 4는 왼손으로 누릅니다.
- 4 3 5 L 왼손 거리는 1, 오른손 거리는 2이므로 왼손으로 5를 누릅니다.
- 5 3 8 L 왼손 거리는 1, 오른손 거리는 3이므로 왼손으로 8을 누릅니다.
- 8 3 2 R 왼손 거리는 2, 오른손 거리는 1이므로 오른손으로 2를 누릅니다.
- 8 2 1 L 1은 왼손으로 누릅니다.
- 1 2 4 L 4는 왼손으로 누릅니다.
- 4 2 5 R 왼손 거리와 오른손 거리가 1로 같으므로, 오른손으로 5를 누릅니다.
- 4 5 9 R 9는 오른손으로 누릅니다.
- 4 9 5 L 왼손 거리는 1, 오른손 거리는 2이므로 왼손으로 5를 누릅니다.
- 5 9 - -
  따라서 "LRLLLRLLRRL"를 return 합니다.

#### 입출력 예 #2

왼손잡이가 [7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2]를 순서대로 누르면 사용한 손은 "LRLLRRLLLRR"이 됩니다.

#### 입출력 예 #3

오른손잡이가 [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]를 순서대로 누르면 사용한 손은 "LLRLLRLLRL"이 됩니다.

```c++
#include <vector>
#include <map>
#include <string>
#include <iostream>

using namespace std;

// 왼손, 오른손 좌표 구조체
typedef struct pos {
	int x;
	int y;
} FingerPos;


// 솔루션 클래스
class Solution {

public:
	vector<int> num;
	string result;
	FingerPos leftFinger, rightFinger;
	map<int, pair<int, int> > padPos;

	void initPad() {
		padPos[0] = { 2, 1 };
		padPos[1] = { 1, 4 };
		padPos[2] = { 2, 4 };
		padPos[3] = { 3, 4 };
		padPos[4] = { 1, 3 };
		padPos[5] = { 2, 3 };
		padPos[6] = { 3, 3 };
		padPos[7] = { 1, 2 };
		padPos[8] = { 2, 2 };
		padPos[9] = { 3, 2 };
	}

	void setFingerPos()
	{
		this->leftFinger.x = 1; this->leftFinger.y = 1; // 초기 왼손 손가락 포지션
		this->rightFinger.x = 3; this->rightFinger.y = 1; // 초기 오른손 손가락 포지션
	}

	void fingerStep(vector<int> numbers, string hands)
	{
		for (int i = 0; i < numbers.size(); i++)
		{
			int push = numbers[i];
			switch (push)
			{
				case 3:
				case 6:
				case 9:
					// 오른손 사용
					this->rightFinger.x = padPos[push].first;
					this->rightFinger.y = padPos[push].second;
					this->result.push_back('R');
					break;
				case 1:
				case 4:
				case 7:
					// 왼손 사용
					this->leftFinger.x = padPos[push].first;
					this->leftFinger.y = padPos[push].second;
					this->result.push_back('L');
					break;
				default:
					// 오른손, 왼손 가까운 곳 사용
					this->findCrossFinger(push, hands);
					break;
			}
		}
		return;
	}

	void findCrossFinger(int number, string hands)
	{
		pair<int, int> targetPos = padPos[number];
		int leftLength = abs(this->leftFinger.x - targetPos.first ) + abs(this->leftFinger.y - targetPos.second);
		int rightLength = abs(this->rightFinger.x - targetPos.first ) + abs(this->rightFinger.y - targetPos.second);

		if (leftLength < rightLength) {
			this->result.push_back('L');
			this->leftFinger.x = targetPos.first;
			this->leftFinger.y = targetPos.second;
		}
		else if (leftLength > rightLength) {
			this->result.push_back('R');
			this->rightFinger.x = targetPos.first;
			this->rightFinger.y = targetPos.second;
		}
		else if (leftLength == rightLength) {
			if (hands == "left") {
				this->result.push_back('L');
				this->leftFinger.x = targetPos.first;
				this->leftFinger.y = targetPos.second;
			}
			else {
				this->result.push_back('R');
				this->rightFinger.x = targetPos.first;
				this->rightFinger.y = targetPos.second;
			}
		} else {
			cout << "error" << endl;
		}
	}
};

string solution(vector<int> numbers, string hands) {
	string answer = "";
	Solution sol;

	sol.initPad();
	sol.setFingerPos();

	sol.fingerStep(numbers, hands);

	return sol.result;
}

int main() {
	const vector<int> numbers = { 1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5 };
	const vector<int> numbers1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	const vector<int> numbers2 = { 7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2 };
	string result;

	result = solution(numbers2, "left");

	cout << result << endl;
	return 0;
}
```

- `initPad()`로 키패드의 좌표를 세팅하였습니다.
  <img src="/assets/images/keypadPos.png">
- `fingerStep()`은 각 버튼을 눌렀을 때, `L` 및 `R`을 출력해줄 로직을 구현하였습니다.

- `FingerPos` 구조체는 각 왼손, 오른손에 사용될 자료형을 추상적으로 구현하였습니다.
- `FingerPos leftFinger`, `FingerPos rightFinger`로 만든 다면, 왼손의 좌표와 오른손의 좌표를 구할 수 있습니다.
- 각 버튼을 눌렀을 때, 왼손에 해당되면 `leftFinger`의 좌표를 `padPos`값 좌표에 업데이트해주고, 오른손에 해당된다면 `rightFinger`의 좌표를 `padPos`값 좌표에 업데이트 해줍니다.
- 여기서 2, 5, 8, 0를 처리해주는 것이 관건인데, `leftFinger`와 `rightFinger` 중 어떤 것이 더 가깝냐에 따라 왼손으로 할지, 오른손으로 할지 처리하는 것이 중요했고 좌표 업데이트도 관건이였습니다.
