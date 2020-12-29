// Find all the prime factors of N
#include <iostream>
using namespace std;

bool isPrimeE(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i < n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

void PF(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (isPrimeE(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << i << " ";
                x = x * i;
            }
        }
    }
}

// Driver code
int main()
{
    int n;
    bool g, r, e;
    cout << "Enter a Num : ";
    cin >> n;
    PF(n);
}
