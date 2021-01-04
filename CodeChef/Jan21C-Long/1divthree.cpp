//

#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    // your code goes here
    int t, n, d;
    ll k;
    cin >> t;
    while (t--)
    {
        int sum = 0, prob, est_day;
        cin >> n >> k >> d;
        for (int i = 0; i < n; i++)
        {
            cin >> prob;
            sum = sum + prob;
        }
        est_day = sum / k;
        if (est_day <= d)
            cout << est_day;
        else
            cout << d;
    }

    return 0;
}
