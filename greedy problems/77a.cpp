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
vi adj[150001];
vi conn[150001];
int vis[150001];
void dfs(int v,int c){
    vis[v]=1;
   // cout<<"hi";
    conn[c].pb(v);
    for(auto x:adj[v]){
        if(!vis[x])dfs(x,c);
    }
}
int32_t main()
{

  int n,m;
  cin>>n>>m;
  f(i,m){
      int a,b;
      cin>>a>>b;
      adj[a].pb(b);
      adj[b].pb(a);
  }
memset(vis,0,sizeof(vis));
int c=0;
for(int i=1;i<=n;i++){
  if(!vis[i]){
      dfs(i,c);
  c++;}
}
int flag=0;
//for(auto x:conn[0])cout<<x<<" ";
for(int i=0;i<c;i++){
    //cout<<i<<" v ";
    for(auto x:conn[i]){
      // cout<<x<<" k ";
     // cout<<adj[x].size()<<" ye "<<conn[i].size()-1<<" bu ";
        if(adj[x].size()!=(conn[i].size()-1)){
            flag=1;
            break;
        }
    }
    if(flag==1)break;
    
}
(flag==0)?cout<<"Yes":cout<<"No"<<endl;

    return 0;
}