#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter the number of elements :";
    cin >> n;

    int a[n];

    cout << "Enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "Largest of element is :" << max;
    return 0;
}