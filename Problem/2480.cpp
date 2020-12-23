#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> arr;
	int tmp;

	for (int i = 0; i < 3; i++) {
		cin >> tmp;
		arr.push_back(tmp);
	}
	
	sort(arr.begin(), arr.end());
	
	if (arr[0] == arr[1] && arr[1] == arr[2])
		cout << 10000 + arr[0] * 1000 << endl;
	else if ((arr[1] == arr[2] && arr[1] != arr[0]) || (arr[1] != arr[2] && arr[1] == arr[0]))
		cout << 1000 + arr[1] * 100 << endl;
	else if (arr[0] != arr[1] && arr[1] != arr[2]) {
		int maxNum = *max_element(arr.begin(), arr.end());
		cout << 100 * maxNum << endl;
	}
		
	return 0;
}