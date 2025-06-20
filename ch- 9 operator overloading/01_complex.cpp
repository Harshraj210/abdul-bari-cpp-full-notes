#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    complex(int r = 0, int i = 0) : real(r), img(i) {}

    complex operator+(complex x)
    {
        complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    int getReal() 
    {
        return real;
    }

    int getImg() 
    {
        return img;
    }
};
int main()
{
    complex c1(3, 5);
    complex c2(10, 6);
    complex c3;
    c3 = c1 + c2;
    cout << c3.getReal() << " +i" << c3.getImg() << endl;
    return 0;
}
