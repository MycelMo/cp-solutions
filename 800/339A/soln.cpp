#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string digits;
 
    for (char c : s) {
        if (c != '+') {
            digits += c;
        }
    }
//learning sort()
    sort(digits.begin(), digits.end());
 
    for (int i=0; i< (int)digits.size(); i++) {
        if (i > 0) {
            cout << '+';
        }
        cout << digits[i];
    }
 
    cout << '\n';
    return 0;
}
//alt method: and easier
//for (int i = 0; i < (int)s.size(); i += 2) {
//    digits += s[i];
//} 
