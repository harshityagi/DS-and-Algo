#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int num, once_digit, rev_num;

    while (t-- > 0)
    {
        cin >> num;
        rev_num = 0;
        while (num > 0)
        {
            once_digit = num % 10;
            rev_num = rev_num * 10 + once_digit;
            num /= 10;
        }
        cout << rev_num << endl;
    }
    return 0;
}
