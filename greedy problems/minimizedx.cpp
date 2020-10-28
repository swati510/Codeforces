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
int n;
vi adj[10000];
int dis1[10000];
int dis2[10000];
int maxm,maxn;
void dfs(int v,int par,int dis1[]){
   dis1[v]=1+dis1[par];
   if(dis1[v]>maxm){
       maxm=dis1[v];
       maxn=v;
   }
   for(auto x:adj[v]){
       if(x!=par){
           dfs(x,v,dis1);
       }
   }

}
int32_t main()
{

  cin>>n;
  f(i,n-1){
      int a,b;
      cin>>a>>b;
      adj[a].pb(b);
      adj[b].pb(a);
  }
  maxn=-1,maxm=-1;
  memset(dis1,0,sizeof(dis1));
  dfs(1,-1,dis1);
  int max1=maxn;
   maxn=-1,maxm=-1;
  memset(dis1,0,sizeof(dis1));
    dfs(max1,-1,dis1);
    dfs(maxn,-1,dis2);
    int mini=INT_MAX;
 forall(i,1,n){
     mini=min(mini,max(dis1[i],dis2[i]));
 }
cout<<mini<<endl;

    return 0;
}