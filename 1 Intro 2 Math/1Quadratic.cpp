//

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

vector<double> quadraticRoots(int a, int b, int c)
{
    // code here
    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d)), r1, r2;

    if (d > 0)
    {
        r1 = (double)(-b + sqrt_val) / (2 * a);
        r2 = (double)(-b - sqrt_val) / (2 * a);
    }
    else if (d == 0)
    {
        r1 = r2 = -(double)b / (2 * a);
    }
    else // d < 0
    {
        r1 = -(double)b / (2 * a);
        r2 = -(double)b / (2 * a);
    }
    vector<double> vect;

    vect.push_back(r1);
    vect.push_back(r2);
    return vect;
}

int main()
{
    double a = 752, b = 904, c = 164; //752 904 164
    vector<double> v = quadraticRoots(a, b, c);
    for (double x : v)
        cout << x << " ";
}