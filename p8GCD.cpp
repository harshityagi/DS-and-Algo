//Greatest Common Divisor
// O(min(a,b))
#include <iostream>
#define min(a, b) (((a) < (b)) ? (a) : (b))
using namespace std;

int gcd(int n, int m)
{
    int res = min(n, m);
    while (res > 0)
    {
        if (m % res == 0 & n % res == 0)
        {
            return res;
        }
        res--;
    }
}

// Driver code
int main()
{
    int n, fac;
    fac = gcd(100, 200);
    cout << fac << endl;
}