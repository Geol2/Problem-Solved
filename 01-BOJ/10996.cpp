//
//  10996.cpp
//  CMac
//
//  Created by 백인걸 on 2020/05/10.
//  Copyright © 2020 백인걸. All rights reserved.
//

#include "main.h"
using namespace std;

int main() {
    int num;
    cin >> num;
    
    int i, j = 0;
    if(num == 1)
        cout << "*" << endl;
    else {
        for(i = 0; i < num*2; i++) {
            if(i%2 == 0) {
                for(j = 0; j < num; j++) {
                    if(j%2 == 1){
                        cout << " ";
                    }
                    else {
                        cout << "*";
                    }
                }
            }
            else {
                for(j = 0; j < num; j++) {
                    if(j%2 == 0){
                        cout << " ";
                    }
                    else {
                        cout << "*";
                    }
                }
            }
            cout << endl;
        }
    }
    return 0;
}
