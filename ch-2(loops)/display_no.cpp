#include <iostream>
using namespace std;
int main()
{
    int n, r;
    cout << "Enter the number : ";
    cin >> n;
    while (n > 0)
    {
        r = n % 10; // intezer division
        n = n / 10; // remove last number
        cout << r << endl;
    }
    return 0;
}