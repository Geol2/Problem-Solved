#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> v;
    int cnt = 0;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    int l = 0; int r = n - 1;

    int x;
    cin >> x;
    while(l < r) {
        if (v[l] + v[r] == x) {
            cnt++;
            l++;
            r--;
        }
        else if (v[l] + v[r] > x) {
            r--;
        }
        else {
            l++;
        }
    }
    cout << cnt << "\n";
	return 0;
}