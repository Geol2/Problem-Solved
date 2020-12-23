#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long num1, num2;
	cin >> num1 >> num2;

	if (num1 > num2)
		swap(num1, num2);
	if (num1 == num2)
		cout << 0 << "\n";
	else {
		cout << num2 - num1 - 1 << "\n";
		for (long long i = num1 + 1; i < num2; i++) {
			cout << i << " ";
		}
		cout << "\n";
	}
	return 0;
}