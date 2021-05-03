#include <iostream>

using namespace std;

int main() {
    int arr[4];
    int arr2[4];
    int sum1 = 0, sum2 = 0;
    
    for(int i = 0; i < 4; i++) {
        cin >> arr[i];
        sum1 += arr[i];
    }
    for(int i = 0; i < 4; i++) {
        cin >> arr2[i];
        sum2 += arr2[i];
    }
    if(sum1 >= sum2) {
        cout << sum1 << endl;
    } else {
        cout << sum2 << endl;
    }
    
    return 0;
}
