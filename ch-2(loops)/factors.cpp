#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter the number :";
    cin >> n;
    cout << "The factors of " << n << "are: ";
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i;
        }
    }
    cout << endl;
    return 0;
}
