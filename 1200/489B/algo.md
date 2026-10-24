The number of boys and girls is given in the input, so we can create vectors of exactly those sizes

int n;
cin >> n;
vector<int> boys(n);
for (int i = 0; i < n; i++) {
    cin >> boys[i];
}

sort(boys.begin(), boys.end());
For ordinary integers, the default order is ascending
sorting both vectors takes O(nlogm+mlogn) time

after sorting, we maintain two indices - i for boys and j for girls (current boy and current girl)
and we can do two cases:
1. boys[i] <girls[j] - 1     : delete boy and move to next i
2. girls[j] <boys[i]-1       : delete girl and move to next j
3. else pair is valid so we add 1 to counter

each index moves only forward
no person is considered for pairing again once discarded or paired
**uses two pointer technique**

use #include <vector> header file too
arrays vs vectors
arrays are static vectors are dynamic

vectors - manages storage automatically and can grow or shrink as needed

#include <vector>
vector<int> a = {4, 1, 7, 2, 3};

vector operations:
a.size();       // Number of elements, size of vector
a[0];           // Access element at index 0, similar workinf like arrays
a.push_back(9); // Append 9
a.pop_back();   // Remove the last element
a.empty();      // Check whether it is empty

complexity:
access, pop_back, size - O(1)
insert at begining, erase element in middle - O(n)
pushback - amortized O(1)

