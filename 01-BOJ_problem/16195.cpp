#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int dp[1001][1001] = {};
#define M 1000000009

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    dp[1][1] = 1, dp[2][1] = 1, dp[2][2] = 1, dp[3][1] = 1, dp[3][2] = 2, dp[3][3] = 1;
    for (int i = 4; i <= 1000; i++) {
        for (int j = 2; j <= i; j++) {
            dp[i][j] = ((dp[i - 1][j - 1] + dp[i - 2][j - 1]) % M + dp[i - 3][j - 1]) % M;
        }
    }
    
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int sum = 0;
        for (int j = 1; j <= m; j++) {
            sum = (sum + dp[n][j]) % M;
        }
        cout << sum << "\n";
    }
    return 0;
}