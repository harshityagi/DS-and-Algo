#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
typedef long long int lli;
using namespace std;
double arr[1000001];
void factorial_log(lli n)
{
    arr[2] = log10(2);
    for (lli i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + log10(i);
    }
}

int main()
{
    int cases = 0;
    int n, b;
    factorial_log(1000000);
    scanf("%d", &cases);
    for (int i = 1; i <= cases; i++)
    {
        scanf("%d %d", &n, &b);
        if (n == 0 || n == 1)
        {
            printf("Case %d: 1\n", i);
            continue;
        }
        double log_sum = arr[n];
        printf("Case %d: %ld\n", i, (long)ceil(log_sum / log10(b)));
    }
    return 0;
}