#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements:";
    cin >> n;
    string A[n];
    cout << "Enter the elements :";
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, A[i]);
    }
    cout << "The elements are :";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}