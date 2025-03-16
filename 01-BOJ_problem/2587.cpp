#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> a;
vector<int> result;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int tmp;
	for (int i = 0; i < 5; i++) {
		cin >> tmp;
		a.push_back(tmp);
	}

	sort(a.begin(), a.end());

	int result = 0;
	for (int i = 0; i < 5; i++) {
		result += a[i];
	}
	result = result / 5;

	cout << result << "\n";
	cout << a[2] << "\n";
	return 0;
}