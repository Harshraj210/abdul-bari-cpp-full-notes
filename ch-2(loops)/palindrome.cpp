#include <iostream>
using namespace std;
int main()
{
    int n, r, m, rev = 0;

    cout << "Enter the number :";
    cin >> n;
    n == m;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    if (m = rev)
    {
        cout << "palindrome";
    }
    else
        cout << "not a palindrome";
    return 0;
}
