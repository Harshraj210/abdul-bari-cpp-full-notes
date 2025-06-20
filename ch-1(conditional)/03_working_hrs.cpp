#include <iostream>
using namespace std;
int main()
{
    int hour;
    cout << "enter the hour :";
    cin >> hour;
    if (hour >= 9 && hour < 18)
    {
        cout << "working hour";
    }
    else if (hour < 9 || hour >= 24)
    {
        cout << "leisure time";
    }
    return 0;
}
