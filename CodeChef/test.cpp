// Discount in a Shop // DISCSHOP
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // your code goes here
    long long int t;
    cout << t << "\n";
    while (t--)
    {
        char n[10];
        long long int q = 0, m = 10000000000;
        int k = strlen(n);
        for (int i = 0; i < k; i++)
        {
            q = 0;
            for (int j = 0; j < k; j++)
                if (i != j)
                    q = q * 10 + (int)n[j] - '0';
            if (m > q)
                m = q;
        }
        cin >> m >> "\n";
    }
    return 0;
}
