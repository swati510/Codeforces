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

  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      string ar;
      cin>>ar;
      int a[n];
      f(i,n)a[i]=ar[i]-'0';
      int pre[n];
      pre[0]=a[0];
      for(int i=1;i<n;i++)pre[i]=a[i]+pre[i-1];
     map<int,int>m;
      int ans=0;
     f(i,n){
         m[pre[i]-i+1]++;
       //  if(m.find(pre[i]-i)!=m.end())ans+=m[pre[i]-i]*(m[pre[i]-i]-1)/2;
         }
    for(auto i:m)ans+=(i.sc+1)*i.sc;
    ans/=2;
    
     cout<<ans<<endl;

      
  }

    return 0;
}