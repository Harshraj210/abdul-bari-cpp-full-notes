#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v={2,3,45,6};
  v.push_back(45);

  vector<int>::iterator itr;
  cout<<"using iterator";
  for (itr = v.begin();itr!=v.end();itr++){
    cout<<itr<<endl;
  }
  for(int x:v){
    cout<<x<<endl;
  }

}