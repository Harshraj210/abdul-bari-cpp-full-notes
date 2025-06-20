#include<iostream>
using namespace std;
void fun(){
    static int v= 0;    // if we remove static
    //int a =5 ;
    v++;
    cout<<v<<endl;
    
}
int main(){
    fun ();
    fun ();
}