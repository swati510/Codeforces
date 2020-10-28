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
      string s;
      cin>>s;
      int n=s.length();
      vector<int>v;
      int c=0;
      for(int i=0;i<n;i++){
          if(s[i]=='0'&&c>0){
              v.pb(c);
              c=0;

          }
          if(s[i]=='1')c++;
      }
      if(c)v.pb(c);
      sort(v.begin(),v.end(),greater<int>());
      int ans=0;
      for(int i=0;i<v.size();i++){
        if(i%2==0)ans+=v[i];
      }
      cout<<ans<<endl;
  }

    return 0;
}