//Reverse of number should be equal to number itself
// Theta(d)
#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int i, rev = 0, temp = n;
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    return (rev == n);
}

// Driver code
int main()
{
    int n;
    bool b;
    cout << "Enter a Num : ";
    cin >> n;
    b = isPalindrome(n);
    cout << n << " is : " << b << endl;
}