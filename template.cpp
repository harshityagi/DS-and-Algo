#include <iostream>
#include <vector>
using namespace std;

#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; i < n; i++)

int main()
{
    int i, n = 5;
    vector<int> arr(n, 0);
    fo(i, n)
            cin >>
        arr[i];
    Fo(i, 1, n)
            cout
        << arr[i];

    return 0;
}
