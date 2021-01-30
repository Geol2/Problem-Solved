#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	int T;
	cin >> T;
	while (T--)
	{
		cin >> a >> b;
		cout << a + b << '\n';
	}
}