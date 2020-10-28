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
 int n,m,k;
int a[71][71];
int dp[71][36][5000];
int go(int ind,int st,int sum,int j){
      if(ind==m&&st>=0){
        if(sum%k==0)return 0;
        return INT_MIN;
        }
    if(dp[ind][st][sum]!=-1)return dp[ind][st][sum];
    int ans=INT_MIN;
    if(st>0)ans=max(ans,a[j][ind]+go(ind+1,st-1,sum+a[j][ind],j));
    ans=max(ans,go(ind+1,st,sum,j));
     return dp[ind][st][sum]=ans;


}
int32_t main()
{

 
  cin>>n>>m>>k;
  f(i,n){
      f(j,m)cin>>a[i][j];
  }
  int sum=0;
  for(int i=0;i<n;i++){
      memset(dp,-1,sizeof(dp));
    sum+=go(0,m/2,0,i);

  }
  cout<<sum<<endl;
    return 0;
}