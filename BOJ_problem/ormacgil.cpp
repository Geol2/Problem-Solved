#include<iostream>

using namespace std;

// 전역배열은 초기화 시키지 않아도 갑시 0으로 들어가진다.

int main() {
	int d[1001][10] = { 0. }; // 지역배열은 0으로 모두 초기화를 시켜주어야 한다. 아니면 쓰레기값이 들어가게 된다.
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