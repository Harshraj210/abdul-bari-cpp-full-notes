#include <iostream>
using namespace std;
int main()
{
    int a[] = {2, 4, 6, 8, 10, 12};
    int *p = a;
    p++;
    cout << *p << endl;
    p = p + 3;
    cout << p[-4] << endl;

    return 0;
}