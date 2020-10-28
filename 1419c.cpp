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
      int n,x;
      cin>>n>>x;
      int a[n];
      f(i,n)cin>>a[i];
      int fl=0,inf=0;
      f(i,n){
          if(a[i]==x)fl++;
      }
      if(fl==n){
          cout<<"0"<<endl;
          continue;
      }
      int surp=0;
      f(i,n){
          surp+=x-a[i];
      }
      if(surp==0||fl>=1){
          cout<<"1"<<endl;
      }
      else cout<<"2"<<endl;
      
  }

    return 0;
}