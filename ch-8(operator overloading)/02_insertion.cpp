#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    complex(int r = 0, int i = 0) : real(r), img(i) {}
    friend ostream &operator<<(ostream &o, complex &c1)
    {
        cout << c1.real << "+i" << c1.img;
        return o;
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
    complex c1(6, 10);
    cout << c1;
    return 0;
}
