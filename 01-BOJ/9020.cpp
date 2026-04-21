#include <iostream>
#define MAX 1000

using namespace std;

bool isPrime(int num) {
    if(num <= 1)
        return false;
    for(int i = 2; i*i <= num; i++) {
        if(num%i==0)
            return false;
    }
    return true;
}

int main() {
    int TC, a, b, n, half;
    int goldbah;
    
    cin >> TC;
    for(int i = 0; i < TC; i++) {
        cin >> goldbah;
        half = goldbah/2;
        for(int j = half; j >= 2; j--){
          a = j;
          b = goldbah-a;
          if(isPrime(a) && isPrime(b)){
            cout << a << " " << b << '\n';
            break;
          }
        }
    }
    return 0;
}
