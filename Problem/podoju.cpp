/*
#include <iostream>
using namespace std;

int main() {

	int a[100002]; // 포도주..
	int d[100002]; // 마실 수 있는 포도주의 최대 양.
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	d[1] = a[1];
	d[2] = a[1] + a[2];

	for (int i = 3; i <= n; i++) {
		d[i] = d[i - 1]; // 먹지 않았을 때, 

		if (d[i] < d[i - 2] + a[i]) { // 한 번 연속으로 먹었을 때,
			d[i] = d[i - 2] + a[i];
		}
		if (d[i] < d[i - 3] + a[i] + a[i - 1]) { // 두 번 연속으로 먹었을 때, 
			d[i] = d[i - 3] + a[i] + a[i - 1];
		}
	}

	cout << d[n] << endl;
	return 0;
}*/