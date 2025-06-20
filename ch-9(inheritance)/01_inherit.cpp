#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = 0);
    int getlength();
    int getbreadth();
    void setlength(int l);
    void setbreadth(int b);
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
class Cuboid : public Rectangle
{ // "":public" is in heritance
    int heigth;

public: // length and breadth are inherited from base class
    Cuboid(int l = 0, int b = 0, int h = 0) : Rectangle(l, b)
    {
         heigth = h;
        //setlength(l);
        //setbreadth(b);
        setheight(h);
    }
    int getlength();
    void setheight(int h){
        heigth=h;
    }
    int volume()
    {
        return getlength() * getbreadth() * heigth;
    }
};
int main()
{
    int l, b, h;

    cout << "Enter the length breadth and heigth :";
    cin >> l >> b >> h;
    Cuboid c(l, b, h);
    cout << c.volume() << endl;
    cout << c.getlength() << endl;
    return 0;
}
