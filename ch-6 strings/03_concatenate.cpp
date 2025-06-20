#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[100], str2[100];
    cout << "Enter the string 1: ";
    cin >> str1;
    cout << "Enter the string 2 : ";
    cin >> str2;
    // strcat(str1, str2);   // destination , source
    strncat(str1, str2, 3); // destination , source ,no. of characters to be added
    cout << str1 << endl;

    return 0;
}
