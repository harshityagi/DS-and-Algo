//Euclidean Algorithm
// O(log(min(a,b)))
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// Driver code
int main()
{
    int n, g, m;
    cout << "Enter 2 Num : ";
    cin >> n;
    cin >> m;
    g = gcd(n, m);
    cout << " gcd is : " << g << endl;
}