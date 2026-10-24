#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(){
  string a,b;
  cin >> a >> b;
  for (int i=0; i< (int)a.size(); i++){
    a[i] = tolower((unsigned char)a[i]);
    b[i] = tolower((unsigned char)b[i]);
  }

  if (a<b) cout << -1 << '\n';
  else if (a>b) cout << 1 << '\n';
  else cout << 0 << '\n';



  return 0;
}
