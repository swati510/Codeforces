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
vector<pii>adj[300];
int go(int curr,int par,int sum,int &ans){
    if(adj[curr].size()==1&&curr!=0){
        if(ans<sum)ans=sum;
        return ans;
    }
    for(auto i:adj[curr]){
       if(i.first!=par){
        int x=sum+i.second;
         int a=go(i.first,curr,x,ans);
       }

    }
    return ans;
}
int32_t main()
{

  int n;
  cin>>n;
  f(i,n-1){
      int u,v,w;
      cin>>u>>v>>w;
      adj[u].pb({v,w});
      adj[v].pb({u,w});
  }
  int sum=0,ans=0;
  int res=go(0,-1,sum,ans);
  cout<<res<<endl;
    return 0;
}