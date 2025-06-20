#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[100], s2[100];
    cout << "Enter the string : ";
    cin >> s1;
    cout << "Enter the string 2 :";
    cin >> s2;
    cout << strcmp(s1, s2);
    return 0;
}