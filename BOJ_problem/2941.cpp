////
////  2941.cpp
////  CMac
////
////  Created by 백인걸 on 2020/07/20.
////  Copyright © 2020 백인걸. All rights reserved.
////
//
//#include "main.h"
//using namespace std;
//
//int main() {
//    string str;
//    int cnt = 0;
//    cin >> str;
//    
//    for(int i = 0; i < str.length(); i++) {
//        //cout << str[i];
//        if(str[i] == 'c') {
//            if(str[i+1] == '=') {
//                cnt++;
//                i++;
//                continue;
//            }
//            if(str[i+1] == '-') {
//                cnt++;
//                i++;
//                continue;
//            }
//            cnt++;
//        } else if(str[i] == 'd') {
//            if(str[i+1] == 'z') {
//                if(str[i+2] == '=') {
//                    cnt++;
//                    i++;
//                    i++;
//                    continue;
//                }
//                cnt++;
//                i++;
//            }
//            if(str[i+1] == '-') {
//                cnt++;
//                i++;
//                continue;
//            }
//            if(str[i+1] == 'd') {
//                cnt++;
//                continue;
//            }
//            cnt++;
//        } else if(str[i] == 'n') {
//            if(str[i+1] == 'j') {
//                cnt++;
//                i++;
//                continue;
//            }
//            cnt++;
//        } else if(str[i] == 's') {
//            if(str[i+1] == '=') {
//                cnt++;
//                i++;
//                continue;
//            }
//            cnt++;
//        } else if(str[i] == 'z') {
//            if(str[i+1] == '=') {
//                cnt++;
//                i++;
//                continue;
//            }
//            cnt++;
//        } else if(str[i] == 'l') {
//            if(str[i+1] == 'j') {
//                cnt++;
//                i++;
//                continue;
//            }
//            cnt++;
//        } else {
//            cnt++;
//            continue;
//        }
//        
//    }
//    cout << cnt <<endl;
//    return 0;
//}
