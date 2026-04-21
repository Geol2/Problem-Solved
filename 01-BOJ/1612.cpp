#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    if(!(n % 2 && n % 5)) return cout << -1 << '\n',0;
    for(int i=1, j = 0;;i++){
        j = (10 * j + 1) % n;
        if(!(j % n)) {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}