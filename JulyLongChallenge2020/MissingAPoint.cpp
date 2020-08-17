#include<iostream>
#define ll long long
using namespace std;

void merge(ll arrX[], ll arrY[], long l, long m, long r){
  int i,j,k;
  long n1=m-l+1, n2=r-m;
  long LX[n1], RX[n2], LY[n1], RY[n2];
  for(i=0; i<n1; i++) LX[i] = arrX[l+i];
  for(j=0; j<n2; j++) RX[j] = arrX[m+1+j];
  for(i=0; i<n1; i++) LY[i] = arrY[l+i];
  for(j=0; j<n2; j++) RY[j] = arrY[m+1+j];
  i=j=0;
  k=l;
  while(i<n1&&j<n2){
    if(LX[i]<=RX[j]){
      arrX[k]=LX[i];
      arrY[k]=LY[i];
      i++;
    } else {
      arrX[k] = RX[j];
      arrY[k] = RY[j];
      j++;
    }
    k++;
  }
  while(i<n1){
    arrX[k]=LX[i];
    arrY[k]=LY[i];
    i++;
    k++;
  }
  while (j < n2) {
    arrX[k]=RX[j];
    arrY[k]=RY[j];
    j++;
    k++;
  }
}

void mergeSort(ll arrX[], ll arrY[], long l, long r){
  if(l<r){
    long m=l+(r-l)/2;
    mergeSort(arrX, arrY, l, m);
    mergeSort(arrX, arrY, m+1, r);
    merge(arrX, arrY, l, m, r);
  }
}

int main() {
  long t;
  cin>>t;
  while(t--) {
    long n;
    cin>>n;
    long N=4*n-1;
    ll x[N], y[N];
    ll ansX, ansY;
    //Input x and y
    for(long i=0; i<N; i++) cin>>x[i]>>y[i];
    //cout<<"------";
    //Sort X Coordinate
    mergeSort(x, y, 0, N-1);
    //Display after x sort
    /*cout<<"------";
    for(long i=0; i<N; i++) cout<<x[i]<<" "<<y[i]<<endl;*/
    for(long i=0; i<N; i+=2){
      if(x[i]!=x[i+1]){
        ansX=min(x[i], x[i+1]);
        break;
      }
    }
    //Sort Y Coordinate
    mergeSort(y, x, 0, N-1);
    //Display after y sort
    /*cout<<"------";
    for(long i=0; i<N; i++) cout<<x[i]<<" "<<y[i]<<endl;*/
    for(long i=0; i<N; i+=2){
      if(y[i]!=y[i+1]){
        ansY=min(y[i], y[i+1]);
        break;
      }
    }
    cout<<ansX<<" "<<ansY<<endl;
  }
  return 0;
}
