#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> a;

	int tmp;
	for (int i = 0; i < 3; i++) {
		cin >> tmp;
		a.push_back(tmp);
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < 3; i++) {
		cout << a[i] << " ";
	}
	return 0;
}