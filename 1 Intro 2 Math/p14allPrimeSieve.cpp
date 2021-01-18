// print all the prime no. before the given number n using Sieve of Eratosthenes.
#include <iostream>
#include <vector>
using namespace std;

void allPrime(int n)
{
    vector<bool> allP(n + 1, true);

    for (int i = 2; i <= n; i++)
    {
        if (allP[i])
        {
            cout << i << "\n";
            for (int j = i * i; j <= n; j = j + i)
            {
                allP[j] = false;
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
    allPrime(n);
}