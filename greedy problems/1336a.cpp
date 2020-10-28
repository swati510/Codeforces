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
const int N=(int)(2*1e5+10);
vi adj[N];
int contrib[N];
int dis[N];
void dfs(int par,int v,int level){
   dis[v]=level;
    
    int ans=0;
    for(auto x:adj[v]){
      if(x!=par) {
          dfs(v,x,level+1);
          contrib[v]+=contrib[x];
      }
    }
    contrib[v]+=ans+1;
    return ;
}
int32_t main()
{

 int n,k;
 cin>>n>>k;
 memset(contrib,0,sizeof(contrib));
 memset(dis,0,sizeof(dis));
 f(i,n-1){
     int u,v;
     cin>>u>>v;
     adj[u].pb(v);
     adj[v].pb(u);
 }
dfs(-1,1,0);
vi cont;
for(int i=1;i<=n;i++){
    cont.pb(dis[i]-(contrib[i]-1));
}
sort(cont.begin(),cont.end(),greater<int>());
int ans=0;
f(i,k)ans+=cont[i];
cout<<ans<<endl;

    return 0;
}