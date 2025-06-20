#include <iostream>
using namespace std;
int add(int x, int y)
{
    int z = x + y;
    return z;
}
int main()
{
    int a, b, c;
    cout << "Enter the two numbers : " << endl;
    cin >> a >> b;
    c = add(a, b);
    cout << "The sum is :" << c;
    return 0;
}