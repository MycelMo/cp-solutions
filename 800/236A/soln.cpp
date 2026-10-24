//using frequency array
#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string username;    //take in username
    cin >> username;
 
    bool seen[26] = {};     //initializing array with 26 boolvalues all set at false initially
    int distinct = 0;       //counter distinct
 
    for (char c : username) {   //we run through the string username one at a time and each current character is stored into c
        int index = c - 'a';    //subracting ascii value of a from current character to get index values in the array
 
        if (!seen[index]) {     //if letter has not appeared yet
            seen[index] = true;     //and if the letter has now appeared
            distinct++;         //add 1 to the counter
        }
    }
 
    if (distinct % 2 == 0) {    //if the value of counter is divisible by 2
        cout << "CHAT WITH HER!\n";
    } else {
        cout << "IGNORE HIM!\n";
    }
 
    return 0;
}
