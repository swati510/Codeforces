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

int n;
int a[300005];
int dp[300005][2];
int go(int i,int fl){
    if(i==n)return 0;
    if(dp[i][fl]!=-1)return dp[i][fl];
    int ans=INT_MIN;
    if(fl==0)ans=max(a[i]+go(i+1,1),go(i+1,fl));
    else ans=max(go(i+1,0)-a[i],go(i+1,fl));
    return dp[i][fl]=ans;
}
int32_t main()
{

  int t;
  cin>>t;
  while(t--){
      int q=0;
      cin>>n>>q;
      f(i,n)cin>>a[i];
      memset(dp,-1,sizeof(dp));
      int ans=go(0,0);
      cout<<ans<<endl;

      
  }

    return 0;
}