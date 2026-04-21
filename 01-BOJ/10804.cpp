#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<int> a(21);
	for (int i = 0; i < 21; i++) a[i] = i;

	int num1, num2;
	for (int i = 0; i < 10; i++) {
		cin >> num1 >> num2;
		reverse(a.begin() + num1, a.begin() + num2 + 1);
	}
	for (int i = 1; i < 21; i++)
		cout << a[i] << ' ';

	return 0;
	return 0;
}