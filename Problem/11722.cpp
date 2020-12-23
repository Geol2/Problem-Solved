#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> A(n + 1);
	for (int i = 1; i <= n; ++i) cin >> A[i];
	vector<int> d(n + 1, 1);

	for (int i = 2; i <= n; ++i) {
		for (int j = 1; j < i; ++j) {
			if (A[j] > A[i])
				d[i] = max(d[i], d[j] + 1);
		}
	}
	cout << *max_element(d.begin(), d.end()) << endl;

	return 0;
}