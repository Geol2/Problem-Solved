#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int N;
    string a, b;
    int alpha[26] ={ 0, };
    
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> a >> b;
        
        bool result = true;
        for(int j = 0; j < a.length(); j++){
            alpha[a[j] - 'a']++;
            alpha[b[j] - 'a']--;
        }
        
        for(int j = 0; j < 26; j++) {
            if(alpha[j] != 0) {
                result = false;
                break;
            }
        }
        
        if(result == false) {
            cout << "Impossible" << "\n";
        } else {
            cout << "Possible" << "\n";
        }
    }
    return 0;
}
