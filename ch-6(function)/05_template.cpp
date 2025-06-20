#include<iostream>
using namespace std;
template<class f>
f maxim(f a,f b){
    return a>b ?a:b;  // ternary
}
int main(){
    cout<< maxim(12,14)<<endl;
    cout<< maxim (13.2,4.5)<<endl;
    cout<< maxim (13.2f,4.5f)<<endl;
    return 0;
}


    
