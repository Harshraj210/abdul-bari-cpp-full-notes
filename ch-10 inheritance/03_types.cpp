#include<iostream>
using namespace std;
class Parent{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
    void funParent(){
        a=10;
        b=5;
        c=6;
    }
};
class Child:public Parent {
    private:
    protected:
    public:
        void funChild(){
            //a=10;          private cannot be acceseed     
            b=5;
            c=6;
        }
};
class Grandcchild:public Child{
    public:
        void funGrandchild(){
            //a=10;      // private member cannot be accesed 
            b=5;
            c=6;

        }
};
int main (){
    Child c;
    //c.a=10;   //public :both cannot be accesed in object
    //c.b=5;   protected 
    c.c=6;
    return 0;
}
