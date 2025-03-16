#include <iostream>
#include <queue>
#include <cmath>
#include <algorithm>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    queue<int> q;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        q.push(i+1);
    }
    
    while(!q.empty()) {
        if(q.size() == 1) {
            cout << q.front() << "\n";
            return 0;
        }
        
        q.pop();
        q.push(q.front());
        q.pop();
    }
    return 0;
}
