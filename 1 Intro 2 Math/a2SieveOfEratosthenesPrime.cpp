// print all the prime no. before the given number n using Sieve of Eratosthenes.
// Simple implementation of Sieve
// O(n loglog n)
#include <iostream>
#include <vector>
using namespace std;

void sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << "\n";
            for (int j = i * i; j <= n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
}
// Driver code
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    bool g, r, e;

    cin >> n;
    sieve(n);
}