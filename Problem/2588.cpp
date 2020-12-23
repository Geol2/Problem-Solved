#include <iostream>

using namespace std;

int main() {
	int a, b;
	int a_first, a_twice, a_third;
	int result_first, result_twice, result_third;

	cin >> a >> b;

	int b_first = b % 10;
	int b_twice = (b % 100) / 10;
	int b_third = (b / 100);
	result_first = a * b_first;
	result_twice = a * b_twice;
	result_third = a * b_third;

	cout << result_first << endl;
	cout << result_twice << endl;
	cout << result_third << endl;
	
	cout << a * b << endl;
	return 0;
}