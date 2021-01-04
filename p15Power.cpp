
#include <iostream>
using namespace std;

int power(int x, int n) //O(logn) and Auxiliary Space Theta (logn)
{
    if (n == 0)
        return 1;
    int temp = power(x, n / 2);
    temp = temp * temp;
    if (n % 2 != 0)
        return temp * x;
    else
        return temp;
}

int powerE(int x, int n) //O(logn) and Auxiliary Space O (1)
{
    int r = 1;
    while (n > 0)
    {
        if (n & 1)
            r = r * x;
        x = x * x;
        n = n >> 1;
    }
    return r;
}

// Driver code
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n, p, pE;

    cin >> x >> n;
    p = power(x, n);
    pE = powerE(x, n);
    cout << p << "\n";
    cout << pE << "\n";
}