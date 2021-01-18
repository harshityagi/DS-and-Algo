// Least Common Multiple
// O(min(n,m))
#include <iostream>
#define max(a, b) ((a > b) ? a : b)
using namespace std;

int lcm(int n, int m)
{
    int t = max(n, m);
    while (t > 0)
    {
        if (t % n == 0 & t % m == 0)
        {
            break;
        }
        t++;
    }
    return t;
}

// Driver code
int main()
{
    int n, g, m;
    cout << "Enter 2 Num : ";
    cin >> n;
    cin >> m;
    g = lcm(n, m);
    cout << " lcm is : " << g << endl;
}