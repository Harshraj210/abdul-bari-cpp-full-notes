#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, i;
    cout << "Enter the number : ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0) // check if i is a divisor of n
        {
            sum = sum + i;
        }
    }
    if (2 * n == sum)
    {
        cout << "Perfect number";
    }
    else
    {
        cout << "Not perfect number";
    }
    return 0;
}