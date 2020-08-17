#include<iostream>
#include<cmath>
using namespace std;

/*int computeDiff( int a,  int b){
  if(a>b)
    return a-b-1;
  else if(b>a)
    return b-a-1;
  else
    return 0;
}*/

int main() {
  short int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) cin>>arr[i];
    long skips=0;
    for (int i=0; i<n-1; i++) {
      skips+=(abs(arr[i]-arr[i+1])-1);
    }
    cout<<skips<<endl;
  }
  return 0;
}
