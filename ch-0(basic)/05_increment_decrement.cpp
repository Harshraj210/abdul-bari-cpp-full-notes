#include <iostream>
using namespace std;
int main()
{
    int x = 6, y;
    // y=++x;                 // pre increment.

    y = x++; // post increment.
    cout << "The value is :" << y;
    return 0;
}