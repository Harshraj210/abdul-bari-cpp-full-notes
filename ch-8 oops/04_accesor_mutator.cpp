#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setlength(int l)
    {
        if (l >= 0)
        {
            length = l;
        }
        else
            length = 0;
    }
    void setbreadth(int b)
    {
        if (b >= 0)
        {
            breadth = b;
        }
        else
            breadth = 0;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
};
int main()
{
    Rectangle r1;
    r1.setlength(10);
    r1.setbreadth(5);
    cout << r1.getlength();
    
}
