#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;

	
	
	int tmp;
	cin >> tmp;
	for (int i = 0; i < tmp; i++) {
		cin >> str;

		list<char> rst;
		list<char> list;
		for (auto j : str) {
			list.push_back(j);
		}

		auto cursor = rst.begin();
		for (auto j : list) {
			if (j == '<') {
				if (cursor != rst.begin()) {
					cursor--;
				};
			}
			else if (j == '>') {
				if (cursor != rst.end()) {
					cursor++;
				}
			}
			else if (j == '-') {
				if (cursor != rst.begin()) {
					cursor--;
					cursor = rst.erase(cursor);
				}
			}
			else {
				rst.insert(cursor, j);
			}
		}

		for (auto i : rst) 
			cout << i;
		cout << "\n";
	}
	return 0;
}