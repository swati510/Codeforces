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
vii adj[100001];
int vis[100001];
int M=1e9+7;
int power(int x,int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return power((x*x)%M,n/2);
    else                             //n is odd
        return (x*power((x*x)%M,(n-1)/2))%M;

}
int dfs(int v,int &con){
    vis[v]=1;
    for(auto i:adj[v]){
        if(!vis[i.fi]&&i.sc==0){
          con++;
           dfs(i.fi,con);
        }
    }
    
}
int32_t main()
{

  int n,k;
  cin>>n>>k;
  f(i,n-1){
      int u,v,c;
      cin>>u>>v>>c;
      adj[u].pb({v,c});
      adj[v].pb({u,c});
  }
  memset(vis,0,sizeof(vis));
  int ans=power(n,k);
  for(int i=1;i<=n;i++){
      if(vis[i]==0){
          int conn=1;
          dfs(i,conn);
          ans-=power(conn,k);
          ans+=M;
          ans%=M;
      }
  }
cout<<ans<<endl;
    return 0;
}