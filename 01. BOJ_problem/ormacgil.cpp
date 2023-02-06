#include<iostream>

using namespace std;

// �����迭�� �ʱ�ȭ ��Ű�� �ʾƵ� ���� 0���� ������.

int main() {
	int d[1001][10] = { 0. }; // �����迭�� 0���� ��� �ʱ�ȭ�� �����־�� �Ѵ�. �ƴϸ� �����Ⱚ�� ���� �ȴ�.
	int n;
	int mod = 10007;

	cin >> n;

	for (int i = 0; i <= 9; i++) {
		d[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= j; k++) {
				d[i][j] += d[i-1][k];
				d[i][j] %= mod;
			}
		}
	}

	long long ans = 0;
	for (int i = 0; i <= 9; i++) {
		ans += d[n][i];
		ans %= mod;
	}
	cout << ans << endl;
	return 0;
}