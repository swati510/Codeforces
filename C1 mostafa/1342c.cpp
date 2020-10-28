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
    int a,b,q;
    cin>>a>>b>>q;
    int prod=a*b/__gcd(a,b);
    int maxm=max(a,b);
    int sub=0;
    while(q--){
      int l,r;
      cin>>l>>r;
      int sum=0;
      int st=l;
      if(maxm>l&&maxm>r){
        cout<<"0 ";
        continue;

      }
      sub=0;
      int minm=max(l,maxm);
      sum=r-minm+1;
      int z=0;
      if(prod>r){
        cout<<sum<<" ";
        continue;
      }
      if(prod<minm)sub+=max(z,maxm-minm%prod);
      sub+=min(maxm,r%prod);
      sub+=max(z,(r/prod-l/prod-1))*maxm;
      cout<<sum-sub<<" ";
     
    }
    cout<<endl;
      
  }

    return 0;
}