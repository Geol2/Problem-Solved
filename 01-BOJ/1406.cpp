#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string init;
	char ch;
	list<char> list;

	cin >> init;
	for (auto c : init)
		list.push_back(c);

	auto cursor = list.end();
	int q;
	cin >> q;
	while (q--) {
		char op;
		cin >> op;
		if (op == 'P') {
			char add;
			cin >> add;
			list.insert(cursor, add);
		}
		else if (op == 'L') {
			if (cursor != list.begin()) cursor--;
		}
		else if (op == 'D') {
			if (cursor != list.end()) cursor++;
		}
		else { // 'B'
			if (cursor != list.begin()) {
				cursor--;
				cursor = list.erase(cursor);
			}
		}
	}	for (auto c : list) cout << c;
	return 0;
}