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
int a[200005];
int dp[200005][2];
int go(int i,int turn){
    if(i>=n)return 0;
    if(dp[i][turn]!=-1)return dp[i][turn];
    int ans=1e9;
    if(turn==0){
       if(i+1<n) ans=a[i]+a[i+1]+go(i+2,!turn);
       ans=min(ans,a[i]+go(i+1,!turn));
    }
    else{
         if(i+1<n) ans=go(i+2,!turn);
       ans=min(ans,go(i+1,!turn));
    }
    return dp[i][turn]=ans;

}
int32_t main()
{

  int t;
  cin>>t;
  while(t--){
      cin>>n;
      memset(dp,-1,sizeof(dp));
      f(i,n)cin>>a[i];
      int turn=0,skip=0;
      skip=go(0,0);
      cout<<skip<<endl;
      
  }

    return 0;
}