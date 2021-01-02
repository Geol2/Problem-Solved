#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		for (int j = i; j < num - 1; j++) {
			cout << " ";
		}
		for (int j = i; j <num -1; j++) {
			cout << " ";
		}
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 0; i < num; i++) {
		for (int j = num; j >  i + 1; j--) {
			cout << "*";
		}
		for (int j = 0; j < i + 1; j++) {
			cout << " ";
		}
		for (int j = 0; j < i + 1; j++) {
			cout << " ";
		}
		for (int j = i; j < num - 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}