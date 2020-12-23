#include<stdio.h>

int main() {
	int num, a, b, sum;

	scanf_s("%d", &num);
	
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &a);
		scanf_s("%d", &b);

		if (a > 1001 || b > 1001)
			return 0;

		sum = a + b;

		printf("%d\n", sum);
	}
	return 0;
}*/

/*
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