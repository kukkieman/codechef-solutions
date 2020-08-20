#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int h, p;
    cin>>h>>p;
    while(h>0){
      if(p>0){
        h-=p;
        p/=2;
      }
      else{
        p=-1;
        break;
      }
    }
    if(p==-1)
      cout<<"0"<<endl;
    else
      cout<<"1"<<endl;
  }
}
