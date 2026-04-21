//
//  main.cpp
//  CMac
//
//  Created by 백인걸 on 2020/05/07.
//  Copyright © 2020 백인걸. All rights reserved.
//

#include "main.h"
using namespace std;

#define STUDENTNUM 5

int main() {
    int stu[STUDENTNUM] = {0, };

    for(int i = 0; i < STUDENTNUM; i++) {
        cin >> stu[i];
        if( stu[i] < 40 )
            stu[i] = 40;
        if(i != 0) {
            stu[i] += stu[i-1];
        }
    }

    int average = stu[4] / 5;
    cout << average << endl;
    
    return 0;
}
