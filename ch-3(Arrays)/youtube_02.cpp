#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k < i*2-1 ; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}