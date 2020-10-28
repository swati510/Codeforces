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
      int a,b,x,y,n;
      cin>>a>>b>>x>>y>>n;
      if(n>=(a+b)){
          cout<<x*y<<endl;
          continue;
      }
      int mina,auxa,minb,auxb;
      if(x>a-n){
          mina=x;
          auxb=max(b-(n-(a-x)),y);
      }
      else{
          mina=a-n;
          auxb=b;
      }
      if(y>b-n){
          minb=y;
          auxa=max(a-(n-(b-y)),x);
      }
      else{
          minb=b-n;
          auxa=a;
      }
      cout<<min(mina*auxb,minb*auxa)<<endl;

  }

    return 0;
}