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

  int t=1;
  //cin>>t;
  while(t--){
      int n;
      cin>>n;
      if(n%2==0){
          cout<<"-1"<<endl;
          continue;
      }
      f(i,n)cout<<i<<" ";
      cout<<endl;
      f(i,n)cout<<i<<" ";
      cout<<endl;
      f(i,n)cout<<(2*i)%n<<" ";
  }

    return 0;
}