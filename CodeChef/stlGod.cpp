#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

bool f(int x, int y)
{
    return x > y;
}

void vectorDemo()
{
    vector<int> A = {11, 2, 3, 14};
    cout << A[1] << endl;
    sort(A.begin(), A.end()); //O(NlogN)

    //2,3,11,14
    //O(logN)
    bool present = binary_search(A.begin(), A.end(), 3); //true
    present = binary_search(A.begin(), A.end(), 4);      //false

    A.push_back(100);
    present = binary_search(A.begin(), A.end(), 100); //true

    //2,3,11,14,100
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    //2,3,11,14,100,100,100,100,100,123

    // vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);  // >=
    // vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100); // >

    auto it = lower_bound(A.begin(), A.end(), 100);  // >=      // O(logn)
    auto it2 = upper_bound(A.begin(), A.end(), 100); // >       // O(logn)

    cout << *it << " " << *it2 << endl;
    cout << it2 - it << endl; //5 O(1) time

    sort(A.begin(), A.end(), f);
    // vector<int>::iterator it3;

    // for (it3 = A.begin(); it3 != A.end(); it3++)
    // {
    //     cout << *it3 << " ";
    // }

    for (int x : A)
    {
        cout << x << " ";
    }
    cout << "line end" << endl;

    for (int &x : A) //reference
    {
        x++;
        cout << x << " ";
    }
}

void setDemo()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);

    for (int x : s)
        cout << x << " ";
    cout << endl;

    // -10 -1 1 2
    auto it = s.find(-1);
    if (it == s.end())
    {
        cout << "not present\n";
    }
    else
    {
        cout << "present\n";
        cout << *it << endl;
    }

    auto it2 = s.upper_bound(-1);
    auto it3 = s.upper_bound(0);
    auto it22 = s.lower_bound(-1);
    cout << *it2 << " " << *it3 << " " << *it22 << endl;

    auto it4 = s.upper_bound(2);
    if (it4 == s.end())
    {
        cout << "oops! cant find \n";
    }
}
int main()
{
    //C++ STL
    setDemo();
}