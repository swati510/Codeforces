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
      int a[n],b[n],c[n];
      f(i,n)cin>>a[i];
      f(i,n)cin>>b[i];
      f(i,n)cin>>c[i];
      int p[n];
      p[0]=a[0];
      for(int i=1;i<n-1;i++){
          if(a[i]==p[i-1])p[i]=b[i];
          else p[i]=a[i];
      }
      if(a[n-1]==p[n-2]||a[n-1]==p[0]){
         if(b[n-1]==p[n-2]||b[n-1]==p[0])p[n-1]=c[n-1];
         else p[n-1]=b[n-1];
      }
      else p[n-1]=a[n-1];
      f(i,n)cout<<p[i]<<" ";
      cout<<endl;
      
  }

    return 0;
}