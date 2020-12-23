//
//  10250.cpp
//  C++Training
//
//  Created by 백인걸 on 2020/08/14.
//  Copyright © 2020 백인걸. All rights reserved.
//

#include <iostream>
#define MAX 100

using namespace std;

int main() {
    int testCase = 0;
    int H, W, N; // H: 높이, W: 넓이, N: N 번째 손님
    int  i, j, k;
    
    int arr[MAX][MAX] = {101, }; // 열, 행
    
    cin >> testCase;
    for(i = 0; i < testCase; i++) {
        H=0; W=0; N=0;
        cin >> H >> W >> N;
        for(j = 0; j < H; j++) { // 1열
            for(k = 0; k < W; k++) { // 1행
                arr[j][k+1] = arr[j][k] + 1;
                arr[j+1][k] = arr[j][k] + 100;
                //cout << arr[j][k] << " ";
            }
            //cout << endl;
        }
        
        int cnt = 0;
        bool end = 0;
        for(k = 0; k < W; k++ ) {
            for(j = 0; j < H; j++) {
                cnt++;
                if(cnt == N) {
                    end = 1;
                    cout << arr[j][k] << endl;
                    break;
                }
            }
            if (end) {
                break;
            }
        }
        
//        cout << endl;
//        for(j = 0; j < H; j++) { // 1열
//            for(k = 0; k < W; k++) { // 1행
//                cout << arr[j][k] << " ";
//            }
//            cout << endl;
//        }
    }
    
    
    return 0;
}
