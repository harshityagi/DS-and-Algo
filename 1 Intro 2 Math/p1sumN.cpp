//Sum Of First N Natural numbers
#include <iostream>
using namespace std;

int sumN(int n)
{
    return n * (n + 1) / 2;
}
int main()
{
    int n, sum;
    cout << "Enter a Num : ";
    cin >> n;
    sum = sumN(n);
    cout << "Sum of " << n << " is : " << sum << endl;
}