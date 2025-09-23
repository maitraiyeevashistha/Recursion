// EXPERIMENT-15
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3


#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    cout <<"the Factorial for "<<n<<" is "<<factorial(n);
    return 0;
}

/*Output:
Enter the number: 5
the Factorial for 5 is 120
*/
