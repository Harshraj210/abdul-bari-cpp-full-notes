#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int *p = a;
    cout << *p << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
        p++;
    }
    cout << *p << endl;
}