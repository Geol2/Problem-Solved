#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> v;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    int cnt = 0;
    int num;
    cin >> num;
    for (int i = 0; i < n; i++) {
        if (v[i] == num) {
            cnt++;
        }
    }
    cout << cnt;
	return 0;
}