#include<bits/stdc++.h>
using namespace std;

int maxprofit(int prices[],int n){
    int maxpri=0;
    int minpri=INT_MAX;

      for(int i=0;i<n;i++){
          minpri=min(minpri,prices[i]);
          maxpri=max(maxpri,prices[i]-minpri);

      }
           return maxpri;
  
}

int main(){

int arr[]={10,20,30};
int n=sizeof(arr)/sizeof(arr[0]);
   
      cout<<maxprofit(arr,n);

    return 0;
}