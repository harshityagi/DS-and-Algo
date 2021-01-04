// Prime NO - Naive Method , under root N method, efficient method
// O(sq root n) and Efficient method is 3 times faster then O(sq root N) as there are 3 times less checks

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i < n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

// Driver code
int main()
{
    int n;
    bool g, r, e;
    cout << "Enter a Num : ";
    cin >> n;
    g = isPrime(n);
    cout << " is prime : " << g << endl;
}