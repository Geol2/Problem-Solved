#include <iostream>
using namespace std;

bool isPrimeInt(int num) {
    if(num <= 1) return false;
    for(int j = 2; j*j <= num; j++) {
        if(num%j == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int tc;
    int num;
    int cnt = 0;
    
    cin >> tc; // 테스트 케이스
    for(int i = 0; i < tc; i++) {
        cin >> num; // 테스트 데이터
        if(isPrimeInt(num)) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
