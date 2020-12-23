#include <iostream>
using namespace std;

bool isPrime(int num) {
    if(num <= 1) return false; // 소수가 아님. false
    for(int j = 2; j*j <= num; j++) {
        if(num%j == 0) {
            return false; // 소수가 아님. false
        }
    }
    return true; // 소수임. true
}

int main() {
    int startNum, endNum;
    int arr[10001] = {0, };
    int min = 10001;
    int sum = 0;
    
    cin >> startNum;
    cin >> endNum;
    
    int j = 0;
    for(int i = startNum; i <= endNum; i++) {
        if( isPrime(i) ) {
            arr[j] = i;
            j++;
        } else {
            continue;
        }
    }
    
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++) {
        if(arr[i] == 0) {
            continue;
        }
        if(min > arr[i]) {
            min = arr[i];
        }
        sum = sum + arr[i];
    }
    
    if(sum == 0) {
        cout << -1 << endl;
    } else {
        cout << sum << endl;
        cout << min << endl;
    }
    
    return 0;
}
