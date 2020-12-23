#include "main.h"
using namespace std;

int main() {
    int cnt;
    cin >> cnt; // 14 -> 2/4
    // 1, 3, 6, 10, 15, 21, 28
    // 1 2  3  4   5   6   7
    int i = 0;
    
    for(i = 1; cnt > 0; i++) {
        cnt = cnt - i;
    } // 해당 cnt의 i번째에 해당하는 그룹, i 찾기. // 5
    
    if( i % 2 == 0 )
        cout << 1 - cnt << "/" << i + cnt - 1 << endl;
    else
        cout << i + cnt - 1 << "/" << 1 - cnt << endl;
    return 0;
}
