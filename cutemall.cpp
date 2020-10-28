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
vi adj[100001];

int dfs(int v,int p,int &cuts){
   int sz=1;
    for(auto i:adj[v]){
        if(i!=p){
            sz+=dfs(i,v,cuts);
        }
    }
    if(sz%2==0&&p!=0)cuts++;
    return sz;
}
int32_t main()
{

  int n;
  cin>>n;
  f(i,n-1){
      int u,v;
      cin>>u>>v;
      adj[u].pb(v);
      adj[v].pb(u);
  }
  int cuts=0;
 // memset(sz,1,sizeof(sz));
  if(n%2!=0)cout<<"-1"<<endl;
 else{ dfs(1,0,cuts);
  cout<<cuts<<endl;}
    return 0;
}