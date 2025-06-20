#include<iostream>
using namespace std;
 enum day{mon=1 ,tue,sun};
 enum dept{cse,it,eccs};
int main(){
     day d;
     dept f;
     d=tue;        // cant be modified
     f=eccs;        // cant be modified
     cout<<d;
     cout<<f;

}