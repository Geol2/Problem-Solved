#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

vector<int> a;
vector<int> result;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<int>::iterator it;
	
	int cnt = 0;
	int tmp;
	for (int i = 0; i < 7; i++) {
		cin >> tmp;
		a.push_back(tmp);
		
		if (a[i] % 2 == 0) {
			cnt++;
		}
		else {
			result.push_back(tmp);
		}
	}

	sort(result.begin(), result.end());

	int sum = 0;
	sum = std::accumulate(result.begin(), result.end(), 0);

	if (cnt == 7) {
		cout << -1 << "\n";
		return 0;
	}
	
	cout << sum << "\n";
	cout << result[0] << "\n";
	return 0;
}