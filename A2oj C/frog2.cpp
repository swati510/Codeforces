#include<bits/stdc++.h>
using namespace std;
int dp[100001];
int ar[100001];

int calc(int i,int n,int k){
  if(i==n-1)return 0;
  if(i>n)return INT_MAX;
  if(dp[i]!=-1)return dp[i];
  int mini;
  for(int l=1;l<=k;l++){
      mini=INT_MAX;
      int ans=calc(i+l,n,k);
      ans+=abs(ar[i+l]-ar[i]);
      mini=min(mini,ans);
  }
  return dp[i]=mini;
}
int main(){
    int n,k;
    cin>>n>>k;
   // int ar[n];
   memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
        cin>>ar[i];
        cout<<ar[i];
    }
    int ans=calc(0,k,n);
    cout<<ans<<endl;
}