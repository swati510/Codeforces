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
int n,k;
int a[100];
int go(int sum,int i){
    if(i==n){
        if(sum>=k)return 0;
        else return INT_MAX;
    }
    int ans=min(1+go(sum+a[i],i+1),go(sum,i+1));
    return ans;
}
int32_t main()
{

  
  cin>>n>>k;
 f(i,n)cin>>a[i];
 int ans=go(0,0);
 cout<<ans<<endl;

    return 0;
}