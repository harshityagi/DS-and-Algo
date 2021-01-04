// Find all the prime factors of N
//O(sq root n)
#include <iostream>
using namespace std;

void printPF(int n)
{
    if (n < 1)
        return;
    while (n % 2 == 0)
    {
        cout << 2;
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        cout << 3;
        n = n / 3;
    }

    for (int i = 5; i * i < n; i = i + 6)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
        while (n % (i + 2) == 0)
        {
            cout << (i + 2) << " ";
            n = n / (i + 2);
        }
    }
    if (n > 3)
    {
        cout << n;
    }
}

// Driver code
int main()
{
    int n;
    bool g, r, e;
    cout << "Enter a Num : ";
    cin >> n;
    printPF(n);
}
