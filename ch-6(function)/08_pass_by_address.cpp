#include<iostream>
using namespace std;
void Swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout << "Inside function, swapped values: " << a << " and " << b << endl;

}
int main(){
    int a,b;
    cout<<"Enter the values :"<<endl;
    cin>>a>>b;
    Swap(&a,&b);
    cout<<"The value swapped are :"<<a<<"and"<<b<<endl;
    return 0;
    

}