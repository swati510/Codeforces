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

int32_t main()
{

  int n,k;
  cin>>n>>k;
  int a[n];
  f(i,n)cin>>a[i];
  int c=0;
  vector<pii>v;
  f(i,n)v.pb({a[i],i+1});
  vector<pii>ans;
  int last=INT_MAX;
  sort(v.begin(),v.end());
  while(c<k&&v[n-1].fi-v[0].fi>0){
      last=v[n-1].fi-v[0].fi;
      ans.pb({v[n-1].sc,v[0].sc});
      v[n-1].fi-=1;
      v[0].fi+=1;
      sort(v.begin(),v.end());
      c++;
  }
  cout<<v[n-1].fi-v[0].fi<<" "<<ans.size()<<endl;
  for(auto x:ans){
      cout<<x.fi<<" "<<x.sc<<endl;
  }
    return 0;
}