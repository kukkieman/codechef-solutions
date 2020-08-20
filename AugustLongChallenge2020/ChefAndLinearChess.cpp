#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n, k, sol=-1, i, s;
    cin>>n>>k;
    int p[n];
    for(i=0; i<n; i++) cin>>p[i];
    for(i=0; i<n; i++){
      s=p[i];
      while(p[i]<=k){
        if(p[i]==k && sol<=s){
          sol=s;
          break;
        }
        p[i]+=s;
      }
    }
    cout<<sol<<endl;
  }
  return 0;
}
