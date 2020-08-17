#include<iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int k;
    cin>>k;
    for(int c=0; c<8; c++){
      for(int r=0; r<8; r++){
        if(r+c==0){
          cout<<"O";
          --k;
        }
        else if(k){
          cout<<".";
          --k;
        }
        else cout<<"X";
      }
      cout<<endl;
    }
  }
  return 0;
}
