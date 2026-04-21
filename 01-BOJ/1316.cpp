//
//  1316.cpp
//  CMac
//
//  Created by 백인걸 on 2020/07/23.
//  Copyright © 2020 백인걸. All rights reserved.
//

#include "main.h"
using namespace std;

int main() {
    int n;
    int cnt = 0;
    string str;
    cin >> n;

    for(int i=0; i < n; i++){
        cin >> str;
        int str_length = str.length();
        bool flag = true;
        
        for(int j=0; j < str_length; j++) {
            for(int k=0; k<j; k++) {
                if(str[j] != str[j-1] && str[j] == str[k]){
                    flag = false;
                    break;
                }
            }
        }
        if(flag == true) cnt++;
    }
    cout << cnt << endl;
}

// 1. 한 알파벳이 이전에 쓰인 적이 없다.
// 2.
