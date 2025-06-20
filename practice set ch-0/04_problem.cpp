#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    double d;
    cout << "Enter the number a :";
    cin >> a;
    cout << "Enter the number b :";
    cin >> b;

    cout << "Enter the number c :";
    cin >> c;
    d = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << "The value is" << d;
    return 0;
}