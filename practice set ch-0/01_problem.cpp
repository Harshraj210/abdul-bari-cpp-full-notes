#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the base :";
    cin >> a;
    cout << "Enter the height :";
    cin >> b;
    c = 0.5 * (a * b);
    cout << "The area of triangle is :" << c;
    return 0;
}