//
//  2675.cpp
//  CMac
//
//  Created by 백인걸 on 2020/05/15.
//  Copyright © 2020 백인걸. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int TestCase;
    int num;
    
    string str;
    
    cin >> TestCase;
    
    for(int i = 0; i < TestCase; i++) {
        cin >> num;
        cin >> str;
        for(int j = 0; j < str.length(); j++) {
            for(int k = 0; k < num; k ++) {
                cout << str[j];
            }
        }
        cout << endl;
    }
    return 0;
}
