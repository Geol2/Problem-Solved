#include<iostream>

using namespace std;

int main() {
	long long d[101][11] = { 0, };
	int n;
	int mod = 1000000000;

	cin >> n;

	for (int i = 1; i <= 9; i++) d[1][i] = 1; // ���̰� 1�� ����� ���̴�.
	for (int i = 2; i <= n; i++) { // ���̰� 2���� n���� ����� ���̴�.
		for (int j = 0; j <= 9; j++) {
			d[i][j] = 0;
			if (j - 1 >= 0) d[i][j] += d[i - 1][j - 1];
			if (j + 1 <= 9) d[i][j] += d[i - 1][j + 1];
			// ������ ���� 0~9���� �̹Ƿ� if�� �ɾ �Ǵ�.
			d[i][j] %= mod;
		}
	}
	long long ans = 0;
	for (int i = 0; i <= 9; i++) {
		// 0���� 9���� ���̰� n�� ���� ���Ͽ� ��ܼ��� ���Ѵ�.
		ans += d[n][i];
	}
	ans %= mod;
	cout << ans << endl;
	return 0;
}