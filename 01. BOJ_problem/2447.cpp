#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int printStar(int x, int y) {
    if (((x % 3) == 1) && ((y % 3) == 1)) return true;
    if (x == 0 || y == 0) return false;
    return printStar(x / 3, y / 3);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (printStar(i, j)) cout << " ";
            else cout << "*";
        }
        cout << "\n";
    }
    return 0;
}