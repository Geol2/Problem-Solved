#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 0, cnt = 0;
    string s, ans;
    
    cin >> s;
    while(s.length() != 1) {
        n = 0;
        for(int i = 0; i < s.size(); i++) {
            n += int(s[i]) - 48;
        }
        s = to_string(n);
        cnt++;
    }
    
    cout << cnt << '\n';
    if( stoi(s) == 3 || stoi(s) == 6 || stoi(s) == 9 ) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    
    return 0;
}
