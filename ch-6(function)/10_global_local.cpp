#include <iostream>

using namespace std;
int g = 10; // global
void fun()
{
    int a = 10; // local
    g = g + a;
    cout << g << endl;
}
int main()
{
    int g = 15;
    fun();
    g++;
    cout << g << endl;
}