// EXPERIMENT-15
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3


#include <iostream>
using namespace std;

int add_n(int n) {
    if (n == 0 || n == 1)
        return n;
    return n + add_n(n - 1);
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    cout <<"the sum for "<<n<<" is "<<add_n(n);
    return 0;
}

/*Output:
Enter the number: 5
the sum for 5 is 15
*/
