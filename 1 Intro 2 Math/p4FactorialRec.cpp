// factorial of number -- recursive method
// Theta(n) and Auxiliary Space required is O(n)
#include <iostream>
using namespace std;

int factorial(int n)
{
    while (n == 0)
        return 1;
    return n * factorial(n - 1);
}
// Driver code
int main()
{
    int n, fac;
    cout << "Enter a Num : ";
    cin >> n;
    fac = factorial(n);
    cout << n << "! is : " << fac << endl;
}