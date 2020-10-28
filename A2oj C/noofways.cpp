#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main(){
    int n;
    cin>>n;
    LL A[n];
    LL s=0;
   // LL s=0,ca=0,in=INT_MAX,cb=0,z=0;
    for(int i=0;i<n;i++){
        cin>>A[i];
        s+=A[i];
        
    }
   if(s%3!=0){
       cout<<0<<endl;
       return 0;
   }
  s=s/3;
 LL ans=0,z=0,f=0;
    LL sum=0;
  if(s==0){
      for(int i=0;i<n-1;i++){
          s+=A[i];
          if(s==0)z++;}
      ans=(z)*(z-1)/2;
  }

  else{
      for(int i=0;i<n-1;i++)
      {
          sum+=A[i];
          if(sum==s)f++;
          else if(sum==2*s)ans+=f;
      }
  }
  cout<<ans;
}