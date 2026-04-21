#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	stack<int> stk;
	vector<int> v1;
	vector<char> op;

	int testCase;
	cin >> testCase;
	
	int input;
	for (int i = 0; i < testCase; i++) {
		cin >> input;	
		v1.push_back(input);
	}

	int j = 0;
	for (int i = 1; i <= testCase; i++) {
		stk.push(i);
		op.push_back('+');
		while (!stk.empty() && stk.top() == v1[j]) {
			stk.pop();
			op.push_back('-');
			j++;
		}
	}

	if (!stk.empty()) cout << "NO" << "\n";
	else {
		for (int i = 0; i < op.size(); i++) cout << op[i] << "\n";
	}
	return 0;
}