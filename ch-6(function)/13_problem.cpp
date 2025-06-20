// linear search
#include <iostream>
using namespace std;
int fun(int a[],int n,int key){
    for (int i = 0; i < n; i++)
    {
       if (key==a[i])
       {
        
        return i;
       }
       
       
    }
    return -1;

}
int main (){
    int a[] ={1,2,3,4,5};
    int n;
    cout<<"enter the number :";
    cin >>n;
    int i= fun(a,7,n);
    if (i== -1)
    {
        cout<<"element not found ";
    }
    else
        cout<<"Element found at index : "<<i;
    
    

   
    
    
    return 0;

    
      
}