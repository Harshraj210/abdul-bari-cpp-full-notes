#include <iostream>
using namespace std;
int Add(int x, int y)
{
    int z = x + y;
    return z;
}
float Add(float m, float n)
{
    float t = m + n;
    return t;
}
int main()
{
    int a, b, c;
    cout << "Enter the numbers :";
    cin >> a >> b;
    c = Add(a, b);
    cout << "The result is :" << c << endl;
    float m, n, t;
    cout << "Enter the numbers :";
    cin >> m >> n;
    t = Add(m, n);
    cout << "The result is :" << t;

    return 0;
}
