#include <iostream>
using namespace std;

int main() {

	int a[100002]; // ������..
	int d[100002]; // ���� �� �ִ� �������� �ִ� ��.
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	d[1] = a[1];
	d[2] = a[1] + a[2];

	for (int i = 3; i <= n; i++) {
		d[i] = d[i - 1]; // ���� �ʾ��� ��, 

		if (d[i] < d[i - 2] + a[i]) { // �� �� �������� �Ծ��� ��,
			d[i] = d[i - 2] + a[i];
		}
		if (d[i] < d[i - 3] + a[i] + a[i - 1]) { // �� �� �������� �Ծ��� ��, 
			d[i] = d[i - 3] + a[i] + a[i - 1];
		}
	}

	cout << d[n] << endl;
	return 0;
}