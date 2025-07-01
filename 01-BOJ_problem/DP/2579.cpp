#include<iostream>
using namespace std;

int main() {
	int S[301] = {0,};
	int D[301][3] = { 0, };

	int n;
	int num;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num;
		S[i] = num;
	}

	D[1][1] = S[1];
	D[1][2] = 0;
	D[2][1] = S[2];
	D[2][2] = S[1] + S[2];

	for (int i = 3; i <= n; i++) {
		D[i][1] = max(D[i - 2][1], D[i - 2][2]) + S[i];
		D[i][2] = D[i - 1][1] + S[i];
	}

	cout << max(D[n][0], D[n][1]) << endl;
	return 0;
}