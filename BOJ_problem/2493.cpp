#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	stack<pair<int, int>> s;
	pair<int, int> p;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int testCase;
		cin >> testCase;
		p = make_pair(testCase, i + 1);

		while (!s.empty()) {
			if (s.top().first > testCase) {
				cout << s.top().second<< " ";
				break;
			}
			s.pop();
		}

		if (s.empty()) {
			cout << "0 ";
		}

		s.push(p);
	}

	return 0;
}