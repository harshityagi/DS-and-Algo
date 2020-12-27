// factorial of a number -- iterative method
// Theta(n) and Auxiliary Space required is O(1)
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
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