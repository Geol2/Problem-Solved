#include <iostream>
#include <vector>
using namespace std;

int main (){
    long long N;
    vector<long long> xcnt(100001, 0);
    vector<long long> ycnt(100001, 0);
    vector<long long> vx;
    vector<long long> vy;

    scanf("%lld", &N);

    for (int i = 0 ; i < N ; i++){
        long long x, y;
        scanf("%lld %lld", &x, &y);
        vx.push_back(x);
        vy.push_back(y);
        xcnt[x]++;
        ycnt[y]++;
    }

    long long total = 0;
    for (int i = 0 ; i < N ; i++){
        long long sum = (xcnt[vx[i]]-1) * (ycnt[vy[i]]-1);
        if (sum < 0) continue;
        total += sum;
    }

    printf("%lld", total);
    return 0;
}
