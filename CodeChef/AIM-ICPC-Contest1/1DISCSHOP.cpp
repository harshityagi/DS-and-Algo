// Discount in a Shop
// DISCSHOP
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // your code goes here
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans = stoi(s);
        for (int i = 0; i < s.length(); i++)
        {
            string temp = s;
            temp.erase(i, 1);
            ans = min(ans, stoi(temp));
        }
        cout << ans << "\n";
    }
    return 0;
}
