// if the functiopn calls itself
#include <iostream>
using namespace std;
void fun(int n)
{
    if (n <= 0)
    {

        return;
    }
    else if (n > 0)
    {
        fun(n - 1);
        cout << n << endl;
    }
}
int main()
{
    int x;
    do
    {
        cout << "Enter the number :";
        cin >> x;
        if (x <= 0)
        {
            cout << "Enter valid number" << endl;
            
        }

    } while (x <= 0);
    fun(x);
    return 0;
}