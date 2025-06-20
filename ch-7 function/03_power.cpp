#include <iostream>
using namespace std;
int Power(int base, int exponent)
{
    int z = 1;
    for (int i = 1; i <= exponent; i++)
    {
        z = z * base;
    }
    return z;
}
int main()
{
    int base, exponent, z;
    cout << "Enter the base : ";
    cin >> base;
    cout << "Enter the exponent : ";
    cin >> exponent;
    z = Power(base, exponent);
    cout << "The value is : " << z;
    return 0;
}
