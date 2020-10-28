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
int dp[201][201][201];
int a1[205];
int a2[205];
int a3[205];
int r,g,b;
bool exit(int i,int j,int k){
    if((i==r&&j==g)||(k==b&&j==g)||(i==r&&k==b))return true;
    return false;

}

int go(int i,int j,int k){
if(exit(i,j,k))return 0;
if(dp[i][j][k]!=-1)return dp[i][j][k];
int tans=0;
if(i<r&&j<g)tans=max(tans,a1[i]*a2[j]+go(i+1,j+1,k));
if(i<r&&k<b)tans=max(tans,a1[i]*a3[k]+go(i+1,j,k+1));
if(k<b&&j<g)tans=max(tans,a3[k]*a2[j]+go(i,j+1,k+1));
return dp[i][j][k]=tans;

}
int32_t main()
{
  cin>>r>>g>>b;
  f(i,r)cin>>a1[i];
  f(i,g)cin>>a2[i];
  f(i,b)cin>>a3[i];
  sort(a1,a1+r,greater<int>());
  sort(a2,a2+g,greater<int>());
  sort(a3,a3+b,greater<int>());
  memset(dp,-1,sizeof(dp));
  int ans=go(0,0,0);
  cout<<ans<<endl;

    return 0;
}