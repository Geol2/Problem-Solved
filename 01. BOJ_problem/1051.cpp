#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

char arr[51][51] = {};
int maxv = 1;

int main() {
	
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> arr[i][j];

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			int x1 = j;
			int x2 = j + 1;
			int y1 = i;
			int y2 = i + 1;
			int res = 0;
			int cnt = 1;
			while( x2 < m && y2 < n)
			{
				if (arr[y1][x1] == arr[y1][x2] && arr[y1][x1] == arr[y2][x1] && arr[y1][x1] == arr[y2][x2])
					res = cnt;
				++x2, ++y2, ++cnt;
			}
			res = res != 0 ? (res + 1) : res;
			maxv = max(maxv, res);
		}
	}

	cout << maxv * maxv;

	return 0;
}