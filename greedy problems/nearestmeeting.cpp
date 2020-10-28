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
int par[100000];
int find(int u){
    if(u==par[u])return u;
    return find(par[u]);
}
void unionset(int a,int b){
    a=find(a);
    b=find(b);
    par[b]=a;
    return;
}
int32_t main()
{

  int t;
  cin>>t;
  while(t--){
      
  }

    return 0;
}