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
      f(i,n)cin>>a[i];
      int cz=0;
      f(i,n)if(a[i]==0)cz++;
      int st=0;
      for(int i=0;i<n;i++){
          if(a[i]==1)break;
          st++;
      }
       for(int i=n-1;i>=0;i--){
          if(a[i]==1)break;
          st++;
      }
      cout<<cz-st<<endl;

      
  }

    return 0;
}