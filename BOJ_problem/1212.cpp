	#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char s1[9][4] = { "", "1", "10", "11", "100", "101", "110", "111" };
    char s2[9][4] = { "000", "001", "010", "011", "100", "101", "110", "111" };

    char s[333335];
    cin >> s;
    int len;
    len = strlen(s);
    
    if(s[0] == '0') cout << 0 << '\n';
    cout << s1[s[0] - 48];
    for (int i = 1; i < len; i++) {
        cout << s2[s[i] - 48];
    }
    return 0;
}
