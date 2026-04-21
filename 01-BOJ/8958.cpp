#include <iostream>
using namespace std;

int main() {
    string arr;
    int num, score, temp = 0;
    
    cin >> num; // 케이스를 지정.
    for(int  i = 0; i < num; i++) {
        cin >> arr; // 배열이 넣음.
        score = 0;
        temp = 0;
        
        for(int j = 0; j < arr.length(); j++) {
            // cout << arr.at(j)<< endl;
            if( arr.at(j) == 'O') {
                score += ++temp;
            } else {
                temp = 0;
            }
        }
        
        cout << score << endl;
    }
    return 0;
}
