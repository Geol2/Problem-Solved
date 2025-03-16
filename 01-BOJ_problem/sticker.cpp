#include <iostream>

#define max(a,b) (((a)>(b))?(a):(b))

using namespace std;

long long a[100001][2]; //스티커의 점수.
long long d[100001][3]; //스티커의 상태. 0,1,2

int main() {
	
	int TestCase;
	cin >> TestCase;

	while ( TestCase-- ) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i][0];
		}
		for (int i = 1; i <= n; i++) {
			cin >> a[i][1];
		}

		d[0][0] = d[0][1] = d[0][2] = 0;

		for (int i = 1; i <= n; i++) {
			d[i][0] = max(d[i - 1][0], max(d[i - 1][1], d[i - 1][2]));
			d[i][1] = max(d[i - 1][0], d[i - 1][2]) + a[i][0];
			d[i][2] = max(d[i - 1][0], d[i - 1][1]) + a[i][1];
		}

		long long ans = 0;
		for (int i = 1; i <= n; i++) {
			ans = max(max(ans, d[i][0]), max(d[i][1], d[i][2]));
		}
		cout << ans << endl;
	}
	return 0;
}