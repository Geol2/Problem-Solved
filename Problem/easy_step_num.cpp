#include<iostream>

using namespace std;

int main() {
	long long d[101][11] = { 0, };
	int n;
	int mod = 1000000000;

	cin >> n;

	for (int i = 1; i <= 9; i++) d[1][i] = 1; // 길이가 1인 경우의 수이다.
	for (int i = 2; i <= n; i++) { // 길이가 2부터 n값일 경우의 수이다.
		for (int j = 0; j <= 9; j++) {
			d[i][j] = 0;
			if (j - 1 >= 0) d[i][j] += d[i - 1][j - 1];
			if (j + 1 <= 9) d[i][j] += d[i - 1][j + 1];
			// 마지막 수는 0~9까지 이므로 if문 걸어서 판단.
			d[i][j] %= mod;
		}
	}
	long long ans = 0;
	for (int i = 0; i <= 9; i++) {
		// 0부터 9까지 길이가 n인 값을 더하여 계단수를 구한다.
		ans += d[n][i];
	}
	ans %= mod;
	cout << ans << endl;
	return 0;
}