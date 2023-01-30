#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int total = a * b;
    
    int arr1[5];
    for(int i = 0; i < 5; i++) {
        arr1[i] = total;
    }
    
    int arr2[5];
    int arr3[5];
    for(int i = 0; i < 5; i++) {
        cin >> arr2[i];
        arr3[i] = arr2[i] - arr1[i];
    }
    
    for(int i = 0; i < 5; i++) {
        cout << arr3[i] << " ";
    }
    cout << "\n";
    
    return 0;
}
