#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,allzero=1,oneneg=0,sum=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]!=0){
                allzero=0;
                if(arr[i]<0)oneneg=1;
            }
         

        }
          int maxsofar=INT_MIN,maxehere=0,maxsofar1=INT_MIN,maxehere1=0;
          for(int i=0;i<n-1;i++){
              maxehere1=maxehere1+arr[i];
              maxsofar1=max(maxsofar1,maxehere1);
              if(maxehere1<0){maxehere1=0;
                //  f=1;
              }
          }
           for(int i=1;i<n;i++){
              maxehere=maxehere+arr[i];
              maxsofar=max(maxsofar,maxehere);
              if(maxehere<0){maxehere=0;
                //  f=1;
              }
          }
        if(maxsofar>=sum||maxsofar1>=sum)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;



}
    }