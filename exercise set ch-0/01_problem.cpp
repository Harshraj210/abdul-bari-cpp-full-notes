#include <iostream>
using namespace std;
int main()
{
    int area, radius, height;
    cout << "Enter the radius :";
    cin >> radius;
    cout << "Enter the height :";
    cin >> height;
    area = 3.14 * radius * radius * height;
    cout << "The area of circle is :" << area;
    return 0;
}