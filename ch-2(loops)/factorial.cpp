#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "Enter the number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "The fatorial of " << n << " is" << fact;
    return 0;
}
