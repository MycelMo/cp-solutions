take the input word 
find its length
if length<=10 print word as it is
if length>10, print first letter length-2 last letter

using strings library

string library to store words:
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;      //define word as a string
    cin >> word;      //input the word
    cout << word << '\n';      //output the word
    return 0;
}




to access indivisual characters: 
string word = "localization";

cout << word[0] << '\n';
cout << word[1] << '\n';


output will be:
l
o


cpp indexing starts at 0




to find length of string 
string word = "localization";

cout << word.size();
