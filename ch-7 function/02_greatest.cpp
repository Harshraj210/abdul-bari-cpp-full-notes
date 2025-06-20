#include <iostream>
using namespace std;
int Max(int a, int b, int c)
{
    if (a > b && a >> c)
    {
        return a;
    }
    else if (b > a && b >> c)
    {
        return b;
    }
    else
        return c;
}
int main()
{
    int x, y, z, m;
    cout << "Enter the three numbers : " << endl;
    cin >> x >> y >> z;
    m = Max(x, y, z);
    cout << "Greatest number is : " << m;
    return 0;
}