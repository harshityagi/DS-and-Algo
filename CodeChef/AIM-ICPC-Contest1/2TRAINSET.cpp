// TRAINSET
#include <iostream>
#include <map>
#include <set>
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
        map<string, int> mp[2];
        set<string> S;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string w;
            int s;
            cin >> w >> s;
            mp[s][w]++;
            S.insert(w);
        }
        int ans = 0;
        for (auto w : S)
        {
            ans += max(mp[0][w], mp[1][w]);
        }
        cout << ans << "\n";
    }
    return 0;
}
