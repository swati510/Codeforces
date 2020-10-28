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

  int a,b;
  cin>>a>>b;
  int n;
  int val=__gcd(a,b);
  vector<int>res;
  for(int i=1;i*i<=val;i++){
      if(val%i==0){res.pb(i);
      if(val/i!=i)res.pb(val/i);}
  }
  sort(res.begin(),res.end());
  int m=res.size();
  //f(i,m)cout<<res[i]<<" ";
  //cout<<endl;
  cin>>n;
  while(n--){
      int x,y;
      cin>>x>>y;
      int ans=-1;
      int i=upper_bound(res.begin(),res.end(),y)-res.begin()-1;
      //cout<<res[i]<<" ";
      if(i>=0&&res[i]>=x)ans=res[i];
      cout<<ans<<endl;
  }
  

    return 0;
}