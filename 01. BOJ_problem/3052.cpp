#include <iostream>

using namespace std;

int main() {
    int num = 0;
    int divide[43] = {0, };
    
    int result = 0;
    
    for(int i = 0; i < 10; i++) {
        cin >> num;
        divide[num%42]++;
    }
    
    for(int i = 0; i < 42; i++) {
        if(divide[i] != 0) {
            result++;
        }
    }
    
    cout << result <<endl;
    return 0;
}
