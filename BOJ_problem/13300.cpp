#include <iostream>
using namespace std;

int student[2][7];
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int S, Y; //성별, 학년
    int studentNumber, MaxHuman; //학생수 한방의최대인원
    int count=0; //방의 수
    cin >> studentNumber >> MaxHuman; //학생수와 최대학생후를 입력함
    
    for (int i = 0; i < studentNumber; i++) {
        cin >> S >> Y;
        student[S][Y]++; //성별과 학년을 입력받은수 해당 배열의 값을 1증가 시킨다
    }
    for (int i=0; i < 2; i++) {
        for (int l = 1; l < 7; l++) {
            count = count + (student[i][l] / MaxHuman);
            if (student[i][l] % MaxHuman != 0) {
                count++;
            }
        }
    }
    cout << count; //printf("%d", count);
    return 0;
}
