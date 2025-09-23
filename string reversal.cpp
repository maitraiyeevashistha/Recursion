// EXPERIMENT-15
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3


#include <iostream>
using namespace std;

string reverseString(string s) {
    if (s.empty())
        return "";
    return reverseString(s.substr(1)) + s[0];
}

int main() {
    string str;
    cout<<"Enter the string: ";
    cin >> str;
    cout <<"the reversed string for "<<str<<" will be "<<reverseString(str);
    return 0;
}

/*Output:
Enter the string: ABCDEFG
the reversed string for ABCDEFG will be GFEDCBA
*/
