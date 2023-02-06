//
//  2523.cpp
//  CMac
//
//  Created by 백인걸 on 2020/05/09.
//  Copyright © 2020 백인걸. All rights reserved.
//

#include "main.h"

using namespace std;

int main() {
    int num;
    std::cin >> num;

    int i,j = 0;
    // i로 줄 수를 나타냄.
    // j로 점을 찍을 예정..

    for(i = 0; i <= (num*2-1)/2; i++) {
        // std::cout << "*";
        for(j = 0; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for( i = num; i > 1; i--){
        for( j = 0; j < i-1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
