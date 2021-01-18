//LCM using Euclidean Algo
// O(log(min(a,b)))

#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
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