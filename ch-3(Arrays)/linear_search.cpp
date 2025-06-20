#include <iostream>
using namespace std;
int main()
{

    int n, key;
    cout << "Enter the number of elements :";
    cin >> n;

    int a[n];
    cout << "Enter the elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the key :";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            cout << "Found at :" << i;
            return 0;
        }
    }
    cout << "Not found";
    return 0;
}
