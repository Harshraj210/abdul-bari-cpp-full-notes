#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[100], str2[100];
    cout << "Enter the string 1 :";
    cin >> str1;

    strcpy(str2, str1);
    cout << str2 << endl;
    return 0;
}