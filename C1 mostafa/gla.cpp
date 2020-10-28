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
      int s=0;
      int sn=0,sp=0;
      f(i,n){
          cin>>a[i];
          if(a[i]>=0)sp+=a[i];
          else sn+=a[i];
          s+=a[i];
      }
      if(s==0){
          cout<<"NO"<<endl;
          continue;
      }
      cout<<"YES"<<endl;
      int ind;
     if(sp>abs(sn)) sort(a,a+n,greater<int>());
     else sort(a,a+n);
      f(i,n)cout<<a[i]<<" ";
      cout<<endl;
      
  }

    return 0;
}