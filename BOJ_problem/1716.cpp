//
//  1716.cpp
//  CMac
//
//  Created by 백인걸 on 2020/07/23.
//  Copyright © 2020 백인걸. All rights reserved.
//

#include "main.h"
using namespace std;

int main() {
    long long a, b, c;
    // a : 고정비용
    // b : 가변비용
    // c : 노트북 가격 책정
    //
    // a + ( b * 생산량 ) < c * 생산량 -> 이익이 발생.
    
    // a + ( b * 생산량 ) = sum
    // c * 생산량 = profit

    cin >> a >> b >> c;
    
    if ( b >= c ) {
        cout << -1 << endl;
    } else {
        cout << a/(c-b) + 1 << endl;
    }
    return 0;
}
