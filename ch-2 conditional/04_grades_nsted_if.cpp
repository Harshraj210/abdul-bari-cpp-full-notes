#include <iostream>
using namespace std;
int main()
{
    int m1, m2, m3;
    float Total, Avg;
    cout << "Enter the marks of three subjects :";
    cin >> m1 >> m2 >> m3;
    Total = m1 + m2 + m3;
    Avg = Total / 3.0;
    if (Avg >= 60)
    {
        cout << "grade A";
    }
    else
    {
        if (Avg >= 35 && Avg < 60)
            cout << "grade B";
        else
            cout << "grade C";
    }
    return 0;
}