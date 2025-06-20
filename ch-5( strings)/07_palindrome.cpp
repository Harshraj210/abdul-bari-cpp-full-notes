#include<iostream>
#include<cstring>
using namespace std;
int maqin(){
    char str[100],rev[100];
    cout<<"Enter the string";
    cin>>str;
    int len=strlen(str);
    bool ispalindrome =true ;
    for (int i = 0; i < len /2; i++)
    {
        if (str[i]!=str[len-1-i])
        {
            ispalindrome = false;
            break;
        }
     if (ispalindrome )
        {
            cout<<"true";
        }
        else
        cout<<"not palindrome ";
        return 0;
        
    }
    


}