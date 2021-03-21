#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int temp;
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> temp;
        n.push_back(temp);
    
        int double_num = temp * temp;
        sum += double_num;
    }
    int div = sum % 10;;
    cout << div << endl;

	return 0;
}