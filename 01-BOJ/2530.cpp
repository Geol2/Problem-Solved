#include <iostream>
using namespace std;

int main() {
    int h = 0, m = 0, s = 0, inc = 0;
    cin >> h >> m >> s;
    cin >> inc;
    
    s += inc;
    if( s > 59 ) {
        m = m + (s / 60);
        s = s % 60;
    }
    
    if( m > 59 ) {
        h = h + (m / 60);
        m = m % 60;
    }
    
    if( h > 23 ) {
        h = h % 24;
    }
    cout << h << " " << m << " " << s << endl;
    return 0;
}
