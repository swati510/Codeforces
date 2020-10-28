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
vector<int>adj[1005];
int countconn(int u,int par){
    int s=1;
    for(auto x:adj[u]){
        if(x!=par)s+=countconn(x,u);
    }
    return s;
}
int32_t main()
{
  
  int t;
  cin>>t;
  while(t--){
      f(i,1005)adj[i].clear();
      int n,x;
      cin>>n>>x;
      f(i,n-1){
          int u,v;
          cin>>u>>v;
          adj[u].pb(v);
          adj[v].pb(u);
      }
      int sum=0;
      if(adj[x].size()<=1){
          cout<<"Ayush"<<endl;
          continue;
      }
   for(auto i:adj[x]){
       
          {
               sum+=countconn(i,x);
            //   cout<<"hi"<<sum;
          }

   
   }
   
   if(sum%2)cout<<"Ayush"<<endl;
   else cout<<"Ashish"<<endl;
      
  }

    return 0;
}