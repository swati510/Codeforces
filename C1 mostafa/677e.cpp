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
int fac[21];
int fact(){
    fac[0]=1;
    fac[1]=1;
    for(int i=2;i<=20;i++)fac[i]=i*fac[i-1];
    
}
int32_t main()
{

  int t=1;
  fact();
  while(t--){
      int n;
      cin>>n;
      int divi=fac[n/2]*fac[n/2];
      int ans=(fac[n]/(divi))*(fac[n/2-1]*fac[n/2-1]);
      cout<<ans/2<<endl;
      
  }

    return 0;
}