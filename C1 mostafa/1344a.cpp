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
      vector<int>v;
      f(i,n)v.pb(i+1+a[(i+1)%n]);
    sort(v.begin(),v.end());
    int flag=0;
    f(i,n-1)if(v[i]==v[i+1]){
        flag=1;
        break;
    }
    //if(a[n-1]>=n)flag=1;
    if(flag)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

      
  }

    return 0;
}