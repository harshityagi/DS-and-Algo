//Trailing 0 in factorial
// Theta(n)
// This solution causes overflow for the higher values of n
#include <iostream>
using namespace std;

int trail0(int n)
{
    int fact = 1, count = 0;
    for (int i = 2; i <= n; i++)
        fact = fact * i;

    while (fact % 10 == 0)
    {
        count++;
        fact = fact / 10;
    }
    return count;
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