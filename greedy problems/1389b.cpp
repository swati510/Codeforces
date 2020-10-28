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
      int n,k,z;
      cin>>n>>k>>z;
      int A[n];
      f(i,n)cin>>A[i];
      int pre[n];
      pre[0]=A[0];
      for(int i=1;i<n;i++)pre[i]=A[i]+pre[i-1];
      //if(k==0)cout<<
      int maxm=INT_MIN,ans, mx=INT_MIN;
      for(int i=1;i<=k;i++){
          if(A[i]+A[i-1]>=mx){
            mx=A[i]+A[i-1];
            int rem=(k-i);
            int rml=min(z,(rem+1)/2);
            int rmr=min(z,rem/2);
             ans=pre[i]+rml*A[i-1]+rmr*A[i]+(pre[i+(rem-(rml+rmr))]-pre[i]);
            maxm=max(ans,maxm);
          }
          
      }
    maxm=max(maxm,pre[k]);
    cout<<maxm<<endl;
      
  }

    return 0;
}