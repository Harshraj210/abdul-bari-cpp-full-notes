#include<iostream>
using namespace std;
int main(){
    int a[10]={1,2,3,4,5,6};
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
      sum=sum+a[i];
    }
    cout<<"sum is "<<sum;
    return 0;
    
}
