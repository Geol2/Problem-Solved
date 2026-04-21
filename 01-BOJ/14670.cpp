#include <iostream>
#include <cstdio>
#include <map>
#include <vector>

using namespace std;

map<int, int> mp; //<key, value>
int main()
{
	int n, r;
	scanf("%d", &n);

	for (int j = 0; j < 101; j++)
		mp[j] = -1;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);

		mp[a] = b;
	}

	scanf("%d", &r);

	for (int i = 0; i < r; i++)
	{
		int a;
		int chk = 1;
		vector<int> vc;
		scanf("%d", &a);

		
		for (int j = 0; j < a; j++)
		{
			int b;
			scanf("%d", &b);

			if( mp[b] == -1 )
				chk = -1;

			if ( mp[b] != -1)
				vc.push_back(mp[b]);
		}

		if ( chk == -1 ) {
			printf("YOU DIED");
		}
		else {
			for (auto i : vc)
				printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}