#include <iostream>

using namespace std;
const int MAX = (1 << 20) + 1;
int have[MAX];
int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 1; i <= k; i++)
        {
            string p;
            cin >> p;
            int mask = 0;
            for (auto y : p)
            {
                mask |= (1 << (y - 'a'));
            }
            have[mask] = i;
        }
        for (int mask = MAX - 1; mask > 0; mask--)
        {
            if (have[mask])
            {
                for (int i = 0; i < 20; ++i)
                {
                    if (mask & (1 << i))
                    {
                        have[mask ^ (1 << i)] = have[mask];
                    }
                }
            }
        }
        auto print_ntimes = [](int num, int rep) {
            for (int i = 0; i < rep; i++)
            {
                cout << num << " ";
            }

            int l = 0, curr_mask = 0;
            for (int i = 0; i < s.length(); i++)
            {
                int cur_bit = (1 << (s[i] - 'a'));
                if (!have[curr_mask | curr_bit])
                {
                    print_ntimes(have[curr_mask], i - l);
                }
                else
                {
                    curr_mask |= curr_bit;
                }
            }
            print_ntimes(have[curr_mask], n - l);
            cout << "\n";
            memset(have, 0, sizeof(have));
        }
    }
