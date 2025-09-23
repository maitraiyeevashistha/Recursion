#include <iostream>
using namespace std;

string reverseString(string s) {
    if (s.empty())
        return "";
    return reverseString(s.substr(1)) + s[0];
}

int main() {
    string str;
    cin >> str;
    cout << reverseString(str);
    return 0;
}