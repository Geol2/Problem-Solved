#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n = 0;
int arr[3];
int tmp[3];

void merge(int st, int en) {
	// ...
	int mid = (st + en) / 2;
	int lidx = st;
	int ridx = mid;
	for (int i = st; i < en; i++) {
		if (ridx == en) tmp[i] = arr[lidx++];
		else if (lidx == mid) tmp[i] = arr[ridx++];
		else if (arr[lidx] <= arr[ridx]) tmp[i] = arr[lidx++];
		else tmp[i] = arr[ridx++];
	}
	for (int i = st; i < en; i++) arr[i] = tmp[i];
}

void merge_sort(int st, int en) {
	if (en - st == 1) return;
	int mid = (st + en) / 2;

	merge_sort(st, mid);
	merge_sort(mid, en);
	merge(st, en);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 3; i++) cin >> arr[i];
	merge_sort(0, 3);
	for (int i = 0; i < 3; i++) cout << arr[i] << ' ';
	return 0;
}