#include <iostream>

using namespace std;

char ch[30] = {0, };

int i, k, r = 1, c = 0, result = 0;

int main() {
	cin >> k;

	for(; k>=r; k-=r, r*=2, c++)
	{
	}
	
	for(i = c-1; i>=0; i--, k/=2)
	{
		ch[i] = '0';
		if (k % 2 == 0) ch[i] += 4;
		else ch[i] += 7;
	}
	
	cout << ch << "\n";
    return 0;
}