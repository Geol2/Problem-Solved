#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<int> a;
	int cnt = 0;
	string str;
	int input, y = 0, m = 0;
	cin >> input;

	int tmp;
	for (int i = 0; i < input; i++) {
		cin >> tmp;
		a.push_back(tmp);
	
		y += 10 * (a[i] / 30 + 1);
		m += 15 * (a[i] / 60 + 1);
	}

	if (y > m) cout << "M ";
	else if (y == m) cout << "Y M ";
	else cout << "Y ";

	cout << min(y, m) << "\n";
	return 0;
}