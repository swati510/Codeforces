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
int parent[100005];
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}
int32_t main()
{

  int n,m;
  cin>>n>>m;
  for(int i=1;i<=n;i++)parent[i]=i;
  f(i,m){
      int l,r,x;
      cin>>l>>r>>x;
      for(int i=l;i<=r;i++){
          if(parent[i]==i)union_sets(x,i);
      }
  }
  for(int i=1;i<=n;i++)(parent[i]!=i)?cout<<parent[i]<<" ":cout<<"0 ";
    return 0;
}