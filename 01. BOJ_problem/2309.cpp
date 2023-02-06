#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> a;
vector<int> result;
int sum = 0;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int tmp;
	for (int i = 0; i < 9; i++) {
		cin >> tmp;
		a.push_back(tmp);
        sum += tmp;
	}

	sort(a.begin(), a.end());

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sum - a[i] - a[j] <= 100)
            {
                for (int k = 0; k < 9; k++)
                    if (k != i && k != j)
                        cout << a[k] << endl;
                return 0;
            }
        }
    }
	return 0;
}