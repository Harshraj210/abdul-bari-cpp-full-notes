#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the number :";
    cin >> n;
    for (i = 0; i <= 10; i++)
    {
        cout << "The table is :" << n * i << endl;
    }
    return 0;
}