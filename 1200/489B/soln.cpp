#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin >> n;       //inputs number of boys
 
    vector<int> boys(n);    //vector to hold boys
 
    for (int i=0; i<n; i++) {
        cin >> boys[i];     //fill in the values for each boy
    }
 
    int m;
    cin >> m;       //inputs the number of girls
 
    vector<int> girls(m);       //vector to hold girls
 
    for (int i = 0; i < m; i++) {
        cin >> girls[i];        //fill in the values for girls
    }
 
    sort(boys.begin(), boys.end()); //sort them in ascending
    sort(girls.begin(), girls.end());
 
    int i=0;  //i for boys
    int j=0;  //j for girls
    int pairs = 0;  //counter to keep track of how many pairings possible
 
    while (i<n && j<m) {
        if (boys[i] < girls[j]-1) {
            i++;    //discard the guy
        } else if (girls[j]<boys[i]-1) {
            j++;    //discard the girl
        } else {
            pairs++;    //add to counter
            i++;        //move forward
            j++;
        }
    }
 
    cout << pairs << '\n';      //print how many pairs
 
    return 0;
}
