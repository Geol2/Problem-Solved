#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> arr1;
	vector<int> arr2;

	int N, M;
	int tmp;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		arr1.push_back(tmp);
	}
	for (int i = 0; i < M; i++) {
		cin >> tmp;
		arr2.push_back(tmp);
	}

	for (int i = 0; i < M; i++) {
		arr1.push_back(arr2[i]);
	}

	sort(arr1.begin(), arr1.end());

	for (int i = 0; i < N + M; i++)
		cout << arr1[i] << " ";

	return 0;
}