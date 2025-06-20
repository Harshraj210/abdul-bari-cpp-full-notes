#include<iostream>
using namespace std;
class Base{
    public:
        Base(){
            cout<<"Non paramaterised base ";
        }
        Base(int x){
            cout<<"Parameterised Base";
        }
};
class Derived:public Base{
    public:
        Derived():Base (){
            cout<<"Non parameterised Derived";
        }
        Derived(int y):Base ( y ){
            cout<<"Parameterised Derived";
        }
};
int main ()
{
    Derived d;
    cout<<endl;
    Derived d2(10);
    return 0;

}