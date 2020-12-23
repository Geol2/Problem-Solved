//
//  2446.cpp
//  CMac
//
//  Created by 백인걸 on 2020/05/09.
//  Copyright © 2020 백인걸. All rights reserved.
//

#include "main.h"

using namespace std;

int main() {
    int num;
    cin >> num;
    // i로 줄수를 표현, j로 *을 표현, k로 공백(" ")을 표현함.
    
    int i, j ,k = 0;
    for(i = 0; i < num; i++) {
        for(k = i; k > 0; k--)
            cout << " ";
        for(j = i; j < num-1; j++)
            cout << "*";
        for(j = i; j < num; j++)
            cout << "*";
        cout<<endl;
    }
    for(i = 0; i < num - 1; i++) {
        for(k = i; k < num - 2; k++)
            cout << " ";
        for(j = i+2; j > 0; j--)
            cout << "*";
        for(j = i; j >= 0; j--)
            cout << "*";
        cout<<endl;
    }
    return 0;
}
