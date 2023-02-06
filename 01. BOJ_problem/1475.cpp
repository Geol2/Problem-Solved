#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int N;
    vector<int> v(9);
    cin >> N;
 
    if (N == 0) v[0]++;
    while (N > 0) {
        if (N % 10 == 9) v[6]++;
        else v[N % 10]++;
        N /= 10;
    }
    v[6] = ceil((double)v[6] / 2);
    cout << *max_element(v.begin(), v.end());
 
    return 0;
}
