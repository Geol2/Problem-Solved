#include<iostream>
#include<vector>
#include<algorithm>
#include <queue>

using namespace std;

#define X first
#define Y second

int board[502][502]; // 1 ��ĥ��, 0 ��ĥ����.
bool vis[502][502];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է��Ұ���.
	int m, n;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

	int num = 0;
	int maxofpicture = 0;
	// �׸��� ������ BFS�� ã�� ���ؼ�
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 0 || vis[i][j]) continue; // ��ĥ�� �κ��� ������ �Ѿ.
			num++;
			queue<pair<int, int>> Q;
			vis[i][j] = 1; // BFS �����ϱ� ���� ���ð��� ����.
			Q.push({ i, j });
			
			int area = 0;
			while (!Q.empty()) {
				area++;
				pair<int, int> cur = Q.front(); Q.pop();
				for (int i = 0; i < 4; i++) {
					int nx = cur.X + dx[i];
					int ny = cur.Y + dy[i];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					if (vis[nx][ny] || board[nx][ny] != 1) continue;
					vis[nx][ny] = 1;
					Q.push({ nx, ny });
				}
			}

			maxofpicture = max(maxofpicture, area);
		}
	}
	cout << num << "\n" << maxofpicture;
	return 0;
}