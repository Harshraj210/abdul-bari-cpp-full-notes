#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v={2,3,45,6};
  v.push_back(45);
  for(int x:v){
    cout<<x<<endl;
  }

}