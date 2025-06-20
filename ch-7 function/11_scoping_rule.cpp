#include<iostream>
using namespace std;
int g=10;
int main (){
    int g= 11;
    {
        int g=32;
        cout <<g<<endl;
        

    }
    cout <<g<<endl;
    cout<< ::g<<endl;   // global resolution 
    return 0;
}