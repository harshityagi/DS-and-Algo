//Trailing 0 in factorial
// Theta(logN)
#include <iostream>
using namespace std;

int trail0(int n)
{
    int count = 0, tr0 = 0;
    for (int i = 5; i <= n; i = i * 5)
        tr0 = tr0 + n / i;
    return tr0;
}

// Driver code
int main()
{
    int n, fac;
    cout << "Enter a Num : ";
    cin >> n;
    fac = trail0(n);
    cout << n << "! is : " << fac << endl;
}