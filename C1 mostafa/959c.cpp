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

  int n;
  cin>>n;
  if(n<=5){
      cout<<"-1"<<endl;
  }
  else {
      for(int i=2;i<n-1;i++)cout<<"1 "<<i<<endl;
      cout<<n-2<<" "<<n-1<<endl;
      cout<<n-2<<" "<<n<<endl;
  }
for(int i=2;i<=n;i++)cout<<"1 "<<i<<endl;

    return 0;
}
