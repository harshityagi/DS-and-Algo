// SEGDIR
#include <iostream>
#include <queue>
#include <vector>

using namespace std;
const int N = 1e3 + 10;
int L[N], R[N], V[N];
vector<int> g[N];
int vis[N];
bool check_bipartite(int s)
{
    queue<int> Q;
    Q.push(s);
    vis[s] = 1;
    bool ret = true;
    while (!Q.empty())
    {
        int x = Q.front();
        Q.pop();
        for (auto y : g[x])
        {
            if (!vis[y])
            {
                Q.push(y);
                vis[y] = 3 - vis[x];
            }
            else if (vis[x] == vis[y])
            {
                ret = false;
            }
        }
    }
    return ret;
}

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
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> L[i] >> R[i] >> V[i];
        }
        //Build the graph.
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (V[i] == V[j] && !(R[i] < L[j] || R[j] < L[i]))
                {
                    g[i].push_back(j);
                    g[j].push_back(i);
                }
            }
        }
        // Check whether the graph is bipartite
        bool ans = true;
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                ans &= check_bipartite(i);
            }
        }
        cout << (ans ? "YES" : "NO") << "\n";
        for (int i = 1; i <= n; i++)
        {
            g[i].clear();
            vis[i] = 0;
        }
    }
    return 0;
}
