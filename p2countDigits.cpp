//Number of Digits in given number n

#include <math.h>
#include <iostream>
using namespace std;

int countDigits(long long n)
{
  return floor(log10(n) + 1);
}

// Driver code
int main()
{
  int n, d;
  cout << "Enter a Num : ";
  cin >> n;
  d = countDigits(n);
  cout << "Count of Digits in " << n << " is : " << d << endl;
}
