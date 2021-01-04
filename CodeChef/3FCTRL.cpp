// trailling 0s for t test cases
// Factorial Problem Code: FCTRL

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int res = 0, t, n;
    cin >> t;

    while (t > 0)
    {
        res = 0;
        cin >> n;
        for (int i = 5; i <= n; i = i * 5)
        {
            res = res + n / i;
        }
        cout << res << endl;
        t--;
    }
    return 0;
}
