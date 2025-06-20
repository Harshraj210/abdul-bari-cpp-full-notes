#include <iostream>
using namespace std;
int Add(int x, int y, int z = 0)
{
    return x + y + z;
}
int main()
{
    int a, b, c, d;
    cout << "Enter the numbers: ";
    cin >> a >> b >> c;
    d = Add(a, b, c);
    cout << "The value is :" << d;
    return 0;
}
