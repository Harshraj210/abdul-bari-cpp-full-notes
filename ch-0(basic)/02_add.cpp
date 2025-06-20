#include <iostream>
using namespace std;
int main()
{
    int a, b, c,remainder;
    cout << "Enter the numbers:";
    cin >> a >> b;
    c =  a /  b;
    remainder= a%b;
    cout << "The value of quotient is :\n" << c;
    cout << "The value remainder is :\n" << remainder;
    return 0;
}