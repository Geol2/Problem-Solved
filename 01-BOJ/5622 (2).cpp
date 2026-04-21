//
//  2941.cpp
//  CMac
//
//  Created by 백인걸 on 2020/05/18.
//  Copyright © 2020 백인걸. All rights reserved.
//

#include "main.h"
using namespace std;

int changeInt(char tmp);

int changeInt(char tmp) {
    int num = 0;
    
    switch(tmp) {
        case 'A' :
        case 'B' :
        case 'C' :
            num = 2;
            break;
        case 'D':
        case 'E':
        case 'F':
            num = 3;
            break;
        case 'G':
        case 'H':
        case 'I':
            num = 4;
            break;
        case 'J':
        case 'K':
        case 'L':
            num = 5;
            break;
        case 'M':
        case 'N':
        case 'O':
            num = 6;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            num = 7;
            break;
        case 'T':
        case 'U':
        case 'V':
            num = 8;
            break;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            num = 9;
            break;
        default:
            break;
    }
    return num;
}

//int main() {
//    string str;
//    char tmp;
//    int tmpInt = 0, result = 0;
//    
//    cin >> str;
//    
//    for(int i = 0; i < str.length(); i++) {
//        tmp = str.at(i);
//        tmpInt = changeInt(tmp);
//        result += tmpInt;
//    }
//    result += str.length();
//    
//    cout << result << endl;
//    return 0;
//}
