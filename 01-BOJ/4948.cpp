#include <iostream>
using namespace std;

bool isPrime(int num) {
    if(num <= 1)
        return false;
    for(int i = 2; i*i <= num; i++) {
        if(num%i==0)
            return false;
    }
    return true;
}

int main() {
    int num, cnt=0;
    int result;
    int max;
    
    while(true) {
        num = 0;
        cnt = 0;
        
        cin >> num;
        // 0 중지.
        if(num == 0)
            break;
        
        max = num;
        for(int i = num + 1; i <= max*2; i++) {
            result = isPrime(i);
            if(result == true){
                cnt++;
                // cout << i << endl;
            }
            num++;
        }
        
        cout << cnt << endl;
    }
    return 0;
}
