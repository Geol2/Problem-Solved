//
//  8_1.cpp
//  C++Training
//
//  Created by 백인걸 on 2020/08/07.
//  Copyright © 2020 백인걸. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int a, b;
    int TestCase;
    int arr[15][15] = {0, };
    
    fill(arr[0], arr[0] + 225, 1);
    
    for(int i = 0; i < 15; i++) {
        arr[i][0] = 1;
    }
    for(int i = 1; i < 15; i++) {
        arr[0][i] += arr[0][i-1];
    }
    
    cin >> TestCase;
    for(int i = 0; i < TestCase; i++) {
        cin >> a >> b;
        for(int j = 1; j <= a; j++) {
            for(int k = 1; k < b; k++) {
                arr[j][k] = arr[j-1][k] + arr[j][k-1];
            }
            //cout << endl;
        }
        cout << arr[a][b-1] << endl;
        
        /* 모든 배열을 출력하여 확인함.
        for(int j = 0; j <= a; j++) {
            for(int k = 0; k < b; k++) {
                cout << arr[j][k] << " ";
            }
            cout << endl;
        }
         */
    }
    return 0;
}
