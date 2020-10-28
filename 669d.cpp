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
int a[100005];
int n;
int go(int ind,int maxm){
    if(ind==n-1)return 1;
    int ans;
    if(a[ind]>=maxm)ans=1+go(ind+1,a[ind]);
    else ans=go(ind+1,maxm);
    return ans;
}
int32_t main()
{

  //int n;
  cin>>n;
  f(i,n)cin>>a[i];
  int ans=go(1,a[0]);
  cout<<ans<<endl;
  

    return 0;
}