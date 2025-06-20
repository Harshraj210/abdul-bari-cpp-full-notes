#include <iostream>
using namespace std;
int main()
{
     int x = 10;
     int &y = x;
     cout << x << endl
          << y;
     x++;
     y++;
     cout << x << endl
          << y;
     return 0;
     
}