#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "enter the initial velocity :";
    cin >> a;
    cout << "enter the final velocity :";
    cin >> b;
    cout << "enter the acceleration  :",
        cin >> c;
    // d=(a*a-b*b)/(2*c);
    d = (pow(a, 2) - pow(b, 2)) / (2 * c); // same as above but using it for maths header.
    cout << "The value is :" << d;
    return 0;
}