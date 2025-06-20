#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the number :";
    cin >> a;
    b = (a * (a + 1)) / 2;
    cout << "The value is :" << b;
    return 0;
}