#include <bits/stdc++.h>
using namespace std;

int main(){

    int t, n;
    cin>>t;
    while(t--){
    
        cin>>n;
        int sum, arr[n], max=0, pro=0;
        
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j)
                    continue;
                else{
                    pro=arr[i]*arr[j];
                    while(pro!=0){
                        sum=sum+pro%10;
                        pro=pro/10;
                    }
                    if(sum>max)
                        max=sum;
                }
                sum=0; 
            }
        }
        cout<<max<<endl;
    }
    return 0;
}