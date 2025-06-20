#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    void Dimensions(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }
    int perimeter();
};
int Rectangle ::perimeter()
{
    return 2 * (length + breadth);
}
int main()
{

    int length, breadth;
    cout << "Enter the length :";
    cin >> length;
    cout << "Enter the breadth :";
    cin >> breadth;
    Rectangle r;
    r.Dimensions(length, breadth);
    cout << "Area is :" << r.area() << endl;
    cout << "Perimeter is :" << r.perimeter() << endl;
    return 0;
}
