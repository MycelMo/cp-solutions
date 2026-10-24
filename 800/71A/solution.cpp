#include <iostream>
#include <string>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t>0){
    t--;
    string word;
    cin >> word;
    
    if (word.size() <=10) {
      cout << word << '\n';
    }
    else {
      cout << word[0] << word.size() - 2 << word[word.size() - 1] << '\n';
    }
  }


  return 0;
}


