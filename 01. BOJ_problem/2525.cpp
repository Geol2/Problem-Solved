#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int h = 0, m = 0, g = 0, tmp = 0;
    cin >> h >> m;
    cin >> tmp;
    
    m += tmp;
    if( m > 59) {
        g = m / 60;
        m = m - 60 * g;
    }
    h += g;
    if( h > 23 ) {
        h -= 24;
    }
    cout << h << " " << m << endl;
    return 0;
}
