// all divisor of number n
// O(sq root n)
#include <iostream>
using namespace std;

void divisors(int n)
{
    int i;
    for (i = 1; i * i < n; i++)
        if (n % i == 0)
            cout
                << i << " ";
    for (; i >= 1; i--)
    {
        if (n % i == 0)
            cout << (n / i) << " ";
    }
}
// Driver code
int main()
{
    int n;
    bool g, r, e;
    cout << "Enter a Num : ";
    cin >> n;
    divisors(n);
}