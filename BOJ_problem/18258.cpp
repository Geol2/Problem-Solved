#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	queue<int> q;
	string str;

	int n, tmp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			cin >> tmp;
			q.push(tmp);
		}
		else if (str == "front") {
			if (q.empty()) { cout << "-1" << "\n"; continue; }
			cout << q.front() << "\n";
		}
		else if (str == "back") {
			if (q.empty()) { cout << "-1" << "\n"; continue; }
			cout << q.back() << "\n";
		}
		else if (str == "size") {
			cout << q.size() << "\n";
		}
		else if (str == "empty") {
			if (q.empty()) cout << "1" << "\n";
			else cout << "0" << "\n";
		}
		else if (str == "pop") {
			if (q.empty()) { cout << "-1" << "\n"; continue; }
			cout << q.front() << "\n";
			q.pop();
		}
		else {
			cout << "잘못된 데이터." << "\n";
		}
	}

	return 0;
}