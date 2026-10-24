+ sign should remain in the same place, only digits should be in ascending order

we use sort() in cpp

for (char c : s)   //visits each character of s one at a time and current character is stored in c
digits +=c;    //appends c to end of digits
sort(digits.begin(), digits.end());  //bigin refers to start of string end refers to position right after end of string
//sorting algorithm operates on the half-open range from begin() up to, but not including, end()
if (i > 0) {
    cout << '+';
}        //print + before every digit except first

complexity:

input contains n cycles, sorting takes logn cycles for each initial cycle thus O(nlogn) and printing takes O(n)

another possible is for (int i = 0; i < (int)s.size(); i += 2) {
    digits += s[i];
}

just alternatively take the digits those are the digits and not + in the end
