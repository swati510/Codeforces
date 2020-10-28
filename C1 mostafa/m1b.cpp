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
  int a[n];
  f(i,n)cin>>a[i];
  int gc=a[0];
  int maxm=a[0];
  forall(i,1,n){
      gc=__gcd(a[i],gc);
      maxm=max(maxm,a[i]);
  }
  int ans=maxm/gc-n;
  if(ans%2)cout<<"Alice"<<endl;
  else cout<<"Bob"<<endl;


    return 0;
}