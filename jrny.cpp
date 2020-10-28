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
int no;

long double go(int curr,int par){
    long double sum=0;
    for(auto i:adj[curr]){
        if(i!=par){
            sum+=go(i,curr)+1;
        }
    }
    return sum ? sum / (adj[curr].size() - (par!= -1)) : 0;
}
int32_t main()
{

  int n;
  cin>>n;
  f(i,n-1){
      int u,v;
      cin>>u>>v;
      u--;v--;
      adj[u].pb(v);
      adj[v].pb(u);

  }
long double ans=go(0,-1);
 cout << fixed << setprecision(7) << ans<< '\n';

    return 0;
}