#include<iostream>
#include<cmath>
using namespace std;

int main(){
  short int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<n; i++){
      for(int j=i; j<n; j++){
        if(arr[i]==arr[j]){
          char start=i, end=j;
          for(int k=start; k<=end; k++){
            for(int a=; a<; a++){
          }
        }
      }
    }
    bool continue=true;
    do{
      for(int i=0; i<n-1; i++){
        if(arr[i]==arr[i+1]){
          for(int i=0; i<n-3; i++) arr[i]=arr[i+2];
          continue=true;
          break;
        }
      }
    }while(continue==true);
  }
  return 0;
}
