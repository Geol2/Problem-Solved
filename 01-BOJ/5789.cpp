#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s, ans;
    
    cin >> n;
    while (n--)
    {
        ans = "";
        cin >> s;
        int ksize = s.size();
        for (int i = 0; i < ksize/2; i++)
        {
            if (s[i] == s[ksize - i - 1]) ans = "Do-it";
            else ans = "Do-it-Not";
        }
        cout << ans << endl;
    }
    return 0;
}
