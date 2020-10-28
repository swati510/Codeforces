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
      int n,p;
      cin>>n>>p;
      int c=0;
      for(int i=1;i<=n&&c<2*n+p;i++){
          for(int j=i+1;j<=n&&c<2*n+p;j++){
              cout<<i<<" "<<j<<endl;
              c++;
          }
      }
  }

    return 0;
}