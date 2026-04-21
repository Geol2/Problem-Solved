#include<iostream>

using namespace std;

int arr1[4];

int i = 0;
int cnt1 = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (i < 3) {
		cnt1 = 0;
		for (int i = 0; i < 4; i++) {
			cin >> arr1[i];
			if (arr1[i] == 0)
				cnt1++;
		}
		
		if (cnt1 == 4) {
			cout << "D" << "\n";
		}
		else if (cnt1 == 3) {
			cout << "C" << "\n";
		}
		else if (cnt1 == 2) {
			cout << "B" << "\n";
		}
		else if (cnt1 == 1) {
			cout << "A" << "\n";
		}
		else {
			cout << "E" << "\n";
		}

		i++;
	}

	return 0;
}