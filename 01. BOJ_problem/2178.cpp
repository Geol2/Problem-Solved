#include<iostream>
#include<vector>
#include<algorithm>
#include <queue>

using namespace std;

#define X first
#define Y second

string board[102];
int dist[502][502];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, n;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}
	for (int i = 0; i < n; i++) {
		fill(dist[i], dist[i] + m, -1);
	}
	
	queue<pair<int, int>> Q;
	Q.push({ 0, 0 });
	dist[0][0] = 0;
	while (!Q.empty()) {
		pair<int, int> cur = Q.front(); Q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if (nx < 0 || nx > n || ny < 0 || ny > m) continue;
			if (dist[nx][ny] >= 0 || board[nx][ny] != '1') continue;
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			Q.push({ nx, ny });
		}
	}
	cout << dist[n-1][m-1] + 1;
	return 0;
}