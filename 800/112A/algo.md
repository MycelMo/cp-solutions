basically need to normalize the letters into case insensitive

using the library <cctype>
use the function tolower() to convert a character to lowercase

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    char c = 'A';
    cout << char(tolower(c)) << '\n';
    return 0;
}

outputs a

The explicit char(...) converts the result back to a character for output.

