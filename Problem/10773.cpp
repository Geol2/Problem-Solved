#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	stack<int> stk;
	int sum = 0;

	int tmp;
	cin >> tmp;
	for (int i = 0; i < tmp; i++) {
		int num;
		cin >> num;

		if (num == 0) {
			stk.pop();
		}
		else {
			stk.push(num);
		}
						
	}

	while (!stk.empty()) {
		sum += stk.top();
		stk.pop();
	}
	cout << sum << "\n";
	return 0;
}