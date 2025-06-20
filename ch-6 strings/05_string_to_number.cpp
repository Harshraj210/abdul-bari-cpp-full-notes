#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
    char s1[100], s2[100];
    cout << "Enter the string 1 :";
    cin >> s1;
    long int x = strtol(s1, NULL, 10);
    cout << x << endl;
    return 0;
}