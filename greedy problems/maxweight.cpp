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
  map<int,int>m;
  f(i,n){
      int a;
      cin>>a;
      if(a!=-1)
      m[a]+=i;
  }
  int maxnum=INF,maxm=-1;
  for(auto x:m){
      if(x.sc>maxm){
          maxm=x.sc;
          maxnum=x.fi;
      }
  }
  cout<<maxnum<<endl;


    return 0;
}