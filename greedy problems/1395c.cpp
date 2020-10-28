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
int n,m;
int a[201],b[201];
vi c;
int dp[201][201];
/*int solve(int i,int j){
    int ans=INT_MAX;
    if(i==n)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    for(int k=0;k<m;k++){
       ans=min(ans,c[i][j]|solve(i+1,k));
    }
    return dp[i][j]=ans;
}*/
bool check(int x){
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<m;j++){
            if(((a[i]&b[j])|x)==x){
              flag=1;
              break;
            }
        }
        if(flag==0)return false;
    }
    return true;
}
int32_t main()
{

  
  cin>>n>>m;
  
  for(int i=0;i<n;i++)cin>>a[i];
  f(i,m)cin>>b[i];
  int flag=0;int ans=0;
  for(int k=0;k<=512;k++){
  if(check(k)){
      ans=k;
      break;
  }
  }
 
cout<<ans<<endl;

    return 0;
}