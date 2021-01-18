#include <iostream>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
        vector<int> pos(256, -1);
        int start = 0;
        int maxV = numeric_limits<int>::min();
        for(int i = 0; i < s.size(); i++) {
            if(pos[s[i]] != -1) {
                maxV = max(maxV, i - start);
                start = pos[s[i]] + 1;
                i = pos[s[i]];
                pos.clear();
                pos.resize(256, -1);
                continue;
            }

            pos[s[i]] = i;
        }

        maxV = max(maxV, (int)s.size() - start);

        return maxV;
    }


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);

	string str;
	cin >> str;

	int a = lengthOfLongestSubstring(str);
	cout<<a;
	return 0;
}