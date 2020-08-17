#include<iostream>
using namespace std;

int main() {
  short unsigned int t;
  cin>>t;
  while(t--) {
    unsigned short int n, sumA, sumB, scoreA=0, scoreB=0;
    cin>>n;
    unsigned a[n], b[n];
    for(int i=0; i<n; i++){
      sumA=sumB=0;
      cin>>a[i]>>b[i];
      while(a[i]>0){
        sumA+=a[i]%10;
        a[i]/=10;
      }
      while(b[i]>0){
        sumB+=b[i]%10;
        b[i]/=10;
      }
      if(sumA>sumB) scoreA++;
      else if(sumB>sumA) scoreB++;
      else{
        scoreA++;
        scoreB++;
      }
    }
    if(scoreA>scoreB) cout<<"0 "<<scoreA<<endl;
    else if(scoreB>scoreA) cout<<"1 "<<scoreB<<endl;
    else cout<<"2 "<<scoreB<<endl;
  }
  return 0;
}
