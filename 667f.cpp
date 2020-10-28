#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define mp make_pair
#define fi first
#define sc second
#define f(i,n) for(int i=0;i<n;i++)
#define forall(i,a,b) for(int i=a;i<b;i++)
#define INF 2147483647
using namespace std;
typedef  pair<int,int> pii;
typedef  vector<int>   vi;
typedef  vector<pii> vii;
int n,k;
string a,t;
int dp[3][205][205];
int go(int ind,int i,int k){
if(i==n){
    return 0;
}
int ans=0;
if(dp[ind][i][k]!=-1)return dp[ind][i][k];
if(t[ind]==a[i]){
    if(ind==1){
        ans=1+go(!ind,i+1,k);
        
    }
    else ans=go(!ind,i+1,k);
}
else{
    if(ind==1){
        if(k>0)ans=max(ans,1+go(!ind,i+1,k-1));
        ans=max(ans,go(ind,i,k));
    }
    else {
         if(k>0)ans=max(ans,go(!ind,i+1,k-1));
        ans=max(ans,go(ind,i,k));
        }
}
return dp[ind][i][k]=ans;
}
int32_t main()
{
  cin>>n>>k;
  cin>>a>>t;
  memset(dp,-1,sizeof(dp));
  int ans=go(0,0,k);
  cout<<ans<<endl;

  

    return 0;
}