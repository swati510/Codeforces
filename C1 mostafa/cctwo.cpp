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
      int n,k;
      cin>>n>>k;
      int q[n];
      int surp=0;
      f(i,n){
          cin>>q[i];
          
      }
      int day=n+1;
      for( int i=0;i<n;i++){
          if(surp+q[i]<k&&day==n+1){
           day=i;
          }
          surp=surp+q[i]-k;
      }
      int ans=day+1;
      if(day==n+1&&surp>0){
          ans=n+surp/k;
         ans+=1;
      }
      cout<<ans<<endl;
  }

    return 0;
}