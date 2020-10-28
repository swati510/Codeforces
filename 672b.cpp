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
      int a[n];
      map<int,int>m;
      f(i,n){
          cin>>a[i];
          a[i]=log2(a[i]);
          m[a[i]]++;
      }
      int ans=0;
      for(auto x:m){
         ans+=(x.second*(x.second-1)/2);
      }
      cout<<ans<<endl;


      
  }

    return 0;
}