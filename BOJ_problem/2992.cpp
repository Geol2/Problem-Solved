#include <iostream>
using namespace std;

int main() {
    string x;
    cin >> x;
    
    int i = next_permutation(x.begin(), x.end());
    if (i) {
        cout << x <<endl;
    } else {
        cout << 0 <<endl;
    }
    return 0;
}
