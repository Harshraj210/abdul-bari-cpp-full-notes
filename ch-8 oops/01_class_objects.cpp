#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectangle r1, r2; // user defined datatype
    cout << "Enter the length :";
    cin >> r1.length;
    cout << "Enter the breadth :";
    cin >> r1.breadth;
    cout << "perimeter is :" << r1.perimeter();
    return 0;
}