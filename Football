#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    
    while(t--){

        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            a[i]*=20;
        }
        
        for(int i=0; i<n; i++){
            cin>>b[i];
            b[i]*=10;
            a[i]-=b[i];
            if(a[i]<0)
                a[i]=0;
        }
        
        int m=0;
        for(int i=0; i<n; i++){
            if(a[i]>m)
                m=a[i];
        }
        cout<<m<<endl;
        
    }
    return 0;
}
