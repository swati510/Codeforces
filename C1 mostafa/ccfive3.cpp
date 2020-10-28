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
struct edge{
    int u;
    int v;
    int weight;
    bool operator<(edge const& other) {
        return weight > other.weight;
    }
};
int calc(int v[][6],int i,int j,int d){
    int dis=0;
    for(int k=0;k<d;k++){
        dis+=abs(v[i][k]-v[j][k]);
    }
    return dis;
}
int32_t main()
{

  int t;
  t=1;
  while(t--){
      int n,d;
      cin>>n>>d;
      int v[n][6];
      for(int i=0;i<n;i++){
          f(j,d)cin>>v[i][j];
      }
      vector<edge>dis;
      for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
              dis.pb({i,j,calc(v,i,j,d)});
             // m[{i,j}]=calc(v,i,j,d);
          }
      }
      sort(dis.begin(),dis.end());
      int tree_id[n];
      for (int i = 0; i < n; i++)
         tree_id[i] = i;

sort(dis.begin(), dis.end());
int cost=0;
for (edge e : dis) {
    if (tree_id[e.u] != tree_id[e.v]) {
        cost += e.weight;
       // result.push_back(e);

        int old_id = tree_id[e.u], new_id = tree_id[e.v];
        for (int i = 0; i < n; i++) {
            if (tree_id[i] == old_id)
                tree_id[i] = new_id;
        }
    }
}
cout<<cost<<endl;
}
      
  

    return 0;
}