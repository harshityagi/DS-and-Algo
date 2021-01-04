#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, half, s_len;
    cin >> t;
    while (t-- > 0)
    {
        string str;
        cin >> str;
        // cout << str;
        int left[26] = {0};
        int right[26] = {0};
        s_len = str.length();
        for (int i = 0; i < s_len / 2; i++)
        {
            int index = str[i] - 'a';
            left[index]++;
        }

        for (int i = (s_len + 1) / 2; i < s_len; i++)
        {
            int index = str[i] - 'a';
            right[index]++;
        }

        int case_s=0;
        for(int i=0;i<26;i++){
            if(left[i]!=right[i])
            case_s = 1;
        }
        if(case_s==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
    }
        return 0;
    }