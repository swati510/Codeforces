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
      int n,x,y;
      cin>>n>>x>>y;
      int minm=LONG_LONG_MAX,mina,mind;
      for(int d=y-x;d>=1;d--){
          if((y-x)%d==0){
              int diff=(y-x)/d;
              for(int k=n-1;k>=diff;k--){
                  int a=y-k*d;
                  if(a>0&&minm>a+(n-1)*d){
                      minm=a+(n-1)*d;
                      mina=a;
                      mind=d;

                  }
              }
          }
      }
      int count=0;
      f(i,n)cout<<mina+(count++)*mind<<" ";
      cout<<endl;
      
  }

    return 0;
}