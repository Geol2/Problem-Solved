#include <iostream>

using namespace std;

int main() {
    int x, y;

    cin >> x;
    cin >> y;

    cout << "Hello World!" << endl;
    if (x > 0 && y > 0)
        printf("1\n");
    else if (x > 0 && y < 0) {
        printf("4\n");
    }
    else if ( x < 0 && y > 0) {
        printf("2\n");
    } else {
        printf("3\n");
    }
    return 0;
}