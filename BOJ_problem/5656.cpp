#include <iostream>
using namespace std;


string getResult(bool result) { if( result == 1) return "true"; else return "false"; } int main(void) { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); string s; int a, b; int n = 1; bool result; while(true) { cin >> a; cin >> s; cin >> b; if( s == ">=" ) { if (a >= b) { result = true; cout << "Case " << n << ": " << getResult(result) << endl; } else { result = false; cout << "Case " << n << ": " << getResult(result) << endl; } } else if ( s == "E") { break; } else if ( s == ">" ) { if ( a > b ) { result = true; cout << "Case " << n << ": " << getResult(result) << endl; } else { result = false; cout << "Case " << n << ": " << getResult(result) << endl; } } else if ( s == "<=") { if( a <= b ) { result = true; cout << "Case " << n << ": " << getResult(result) << endl; } else { result = false; cout << "Case " << n << ": " << getResult(result) << endl; } } else if ( s == "<" ) { if( a < b ) { result = true; cout << "Case " << n << ": " << getResult(result) << endl; } else { result = false; cout << "Case " << n << ": " << getResult(result) << endl; } } else if ( s == "!=" ) { if( a != b ) { result = true; cout << "Case " << n << ": " << getResult(result) << endl; } else { result = false; cout << "Case " << n << ": " << getResult(result) << endl; } } else if ( s == "==" ) { if( a == b ) { result = true; cout << "Case " << n << ": " << getResult(result) << endl; } else { result = false; cout << "Case " << n << ": " << getResult(result) << endl; } } n++; } return 0; }


int* getResult(bool result, int *n) {
    cout << "Case " << *n << ": ";
    if( result == 1)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return n;
}

bool opResult(int a, string op, int b) {
    if( op == ">") {
        if( a > b) {
            return true;
        } else {
            return false;
        }
    } else if ( op == ">=") {
        if( a >= b ) {
            return true;
        } else {
            return false;
        }
    } else if ( op == "<") {
        if( a < b) {
            return true;
        } else {
            return false;
        }
    } else if ( op == "<=") {
        if( a <= b) {
            return true;
        } else {
            return false;
        }
    } else if ( op == "!=" ) {
        if( a != b) {
            return true;
        } else {
            return false;
        }
    } else if ( op == "==" ) {
        if( a == b) {
            return true;
        } else {
            return false;
        }
    } else {
        return "E";
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    string s, op;
    int a, b;
    int n1 = 1;
    int *n = &n1;
    
    bool result;
    
    while(true) {
        cin >> a;
        cin >> s; if(s == "E") return 0;
        cin >> b;
        
        result = opResult(a, s, b);
        n = getResult(result, n);
        n++;
    }
    return 0;
}
