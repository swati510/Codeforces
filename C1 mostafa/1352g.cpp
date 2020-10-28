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
      if(n==2||n==3){
          cout<<"-1"<<endl;
          continue;
      }
      if(n==4){
          cout<<"3 1 4 2"<<endl;
          continue;
      }
      int i;
      map<int,int>m;
      for( i=1;i<=n;i+=2)cout<<i<<" ";
      i-=2;
      cout<<i-3<<" ";
     
      i-=3;
      if(i+4<=n)cout<<i+4<<" ";
      if(i+2<=n)cout<<i+2<<" ";
      i-=2;
      while(i>0){
          cout<<i<<" ";
          i-=2;
          
      }
      cout<<endl;
  }

    return 0;
}