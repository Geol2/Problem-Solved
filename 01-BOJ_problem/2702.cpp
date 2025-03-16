#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int c;
    while(b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int tc;
    cin >> tc;
    
    for(int i = 0; i < tc; i++) {
        int n, m;
        cin >> n >> m;
        
        cout << lcm(n, m) << " " << gcd(n, m) << "\n";
    }
    
    return 0;
}
