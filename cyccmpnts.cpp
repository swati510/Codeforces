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
vi adj[200001];
int vis[200001];
int no;
 void dfs(int v,int p,int &f){
      vis[v]=1;
      if(adj[v].size()!=2)f=1;
     // if(f==1)return false;
      for(auto i:adj[v]){
          if(!vis[i])dfs(i,v,f);
          //else if(vis[i]==1&&i!=p&&f==0)return true;
          
      }
      return;
  }
int32_t main()
{

  int n,m;
  cin>>n>>m;
  f(i,m){
   int u,v;
   cin>>u>>v;
   adj[u].pb(v);
   adj[v].pb(u);
  }

  memset(vis,0,sizeof(vis));
  no=0;
  for(int i=1;i<=n;i++){
      int f=0;
   if(!vis[i]){
       dfs(i,-1,f);
       if(f==0)no++;
   }
   
  }

 cout<<no<<endl;
    return 0;
}