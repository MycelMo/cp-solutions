
#include <iostream>          //in cpp its iostream
using namespace std;          //so that i dont need to keep putting std before everything

int main() {
    int w;
    cin >> w;          //scanf equivalent

    if (w > 2 && w % 2 == 0) {        
        cout << "YES\n";          //printf equivalent
    } else {
        cout << "NO\n";
    }

    return 0;
}
