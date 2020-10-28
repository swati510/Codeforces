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
int dp[101][101][11][11];
int K1,K2;
int mod=100000000;
int go(int n1,int n2,int k1,int k2){
    if(n1==0&&n2==0)return 1;
    if(n1==0&&n2>K2)return 0;
    if(n2==0&&n1>K1)return 0;
    if(dp[n1][n2][k1][k2]!=-1)return dp[n1][n2][k1][k2];
    int ans1=0,ans2=0;
    if(n1>0&&k1<K1)ans1=go(n1-1,n2,k1+1,0);
    if(n2>0&&k2<K2)ans2=go(n1,n2-1,0,k2+1);
    return dp[n1][n2][k1][k2]=ans1%mod+ans2%mod;

}
int32_t main()
{

  int n1,n2;
  cin>>n1>>n2>>K1>>K2;
  memset(dp,-1,sizeof(dp));
 cout<<go(n1,n2,0,0)%mod<<endl;

    return 0;
}