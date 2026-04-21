#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string conv_num[11] = { "zero", "one", "two", "three", "four" , "five", "six", "seven", "eight", "nine" };
vector< pair<string, int> > v;

int main() {
	int M, N;
	cin >> M >> N ;

	string s;
	for(int i = M; i <= N; i++)
	{
		if( i >= 10 )
		{
			s = conv_num[i / 10] + " " + conv_num[i % 10];
			v.push_back({s, i});
		} else {
			s = conv_num[i % 10];
			v.push_back({ s, i });
		}
	}

	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++)
	{
		cout << v[i].second << " ";
		if (i % 10 == 9) cout << "\n";
	}
    return 0;
}