---
title: "모의고사"
categories:
  - Programmers
tags:
  - Programmers
last_modified_at: 2022-04-13T09:00:00-14:00:00
---

# 모의고사

## 문제 설명

- 수포자는 수학을 포기한 사람의 준말입니다. 수포자 삼인방은 모의고사에 수학 문제를 전부 찍으려 합니다. 수포자는 1번 문제부터 마지막 문제까지 다음과 같이 찍습니다.
- 1번 수포자가 찍는 방식: 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, ...
- 2번 수포자가 찍는 방식: 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5, ...
- 3번 수포자가 찍는 방식: 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...
- 1번 문제부터 마지막 문제까지의 정답이 순서대로 들은 배열 answers가 주어졌을 때, 가장 많은 문제를 맞힌 사람이 누구인지 배열에 담아 return 하도록 solution 함수를 작성해주세요.

## 제한 조건

- 시험은 최대 10,000 문제로 구성되어있습니다.
- 문제의 정답은 1, 2, 3, 4, 5중 하나입니다.
- 가장 높은 점수를 받은 사람이 여럿일 경우, return하는 값을 오름차순 정렬해주세요.

## 입출력 예

|answers	   | return  |
|:------------:|:-------:|
| [1,2,3,4,5]  | [1]     |
| [1,3,2,4,2]  | [1,2,3] |

## 입출력 예 설명

### 입출력 예 #1
- 수포자 1은 모든 문제를 맞혔습니다.
- 수포자 2는 모든 문제를 틀렸습니다.
- 수포자 3은 모든 문제를 틀렸습니다.
- 따라서 가장 문제를 많이 맞힌 사람은 수포자 1입니다.

### 입출력 예 #2
- 모든 사람이 2문제씩을 맞췄습니다.

```c++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Mathematician {
public:
    // 각 수포자들의 정답수
    vector<int> cnt = {0, 0, 0};
    
    // 각 수포자들이 찍는 방식
    vector<int> mathematician1 = {1, 2, 3, 4, 5};
    vector<int> mathematician2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> mathematician3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    vector<int> answerCnt;
    vector<int> answer;
    
    Mathematician(vector<int> answers) {
        this->answerCnt = answers;
    }
    
    bool isAnswer(vector<int> answer) {
        for(int i = 0; i < answer.size(); i++) {
            if(this->mathematician1[i % 5] == answer[i] ) {
                // 수포자1 의 반복방식
                this->cnt[0]++;
            }
            if (this->mathematician2[i % 8] == answer[i]) {
                // 수포자2 의 반복방식
                this->cnt[1]++;
            }
            if (this->mathematician3[i % 10] == answer[i]) {
                // 수포자3 의 반복방식
                this->cnt[2]++;
            }
        }
        return true;
    }
    
    vector<int> getMax() {
        int maxScore = max(max(this->cnt[0], this->cnt[1]), this->cnt[2]);
        
        for(int i = 0; i < 3; i++) {
            if( maxScore == this->cnt[i] ) {
                this->answer.push_back(i + 1);
            }
        }
        
        return answer;
    }
};

class Solution {
public:
    vector<int> giveUpMathematician(int cnt, vector<int> answers) {
        Mathematician *mathematician = nullptr;
        vector<int> answer;
    
        mathematician = new Mathematician(answers);
        mathematician->isAnswer(answers);
        answer = mathematician->getMax();
        
        return answer;
    }
};

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    Solution sol;
    answer = sol.giveUpMathematician(3, answers);
    
    return answer;
}


int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    vector<int> answer1 = {1, 2, 3, 4, 5};
    vector<int> answer2 = {1, 3, 2, 4, 2};
    
    Solution sol;
    sol.solution(answer1);
    
}

```

- 객체지향적으로 생각하다보니 생각보다 난잡하게 짜놓은 감이 들었다.
- 굳이 어렵게 해야하나 싶기도 하다!?

## 풀이

- 수포자들의 패턴을 파악해서 풀었다.
- 패턴을 이용해서 해당 정답 케이스를 모두 탐색해서 가장 많은 정답을 맞힌 수포자를 출력하도록 만들었다.