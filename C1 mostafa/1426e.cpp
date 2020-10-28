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
  int ra,sa,pa,rb,sb,pab;
  cin>>ra>>sa>>pa;
  cin>>rb>>sb>>pab;
  int maxm=0,minm=n;
  maxm+=min(ra,sb)+min(sa,pab)+min(pa,rb);
  int ls1,ls2,ls3;
  ls1=min(ra,pab);
  ra-=ls1;
  pab-=ls1;
  ls2=min(pa,sb);
  //cout<<ls2;
  pa-=ls2;
  sb-=ls2;
  ls3=min(sa,rb);
 rb-=ls3;
  sa-=ls3;
  //cout<<minm-(ls1+ls2+ls3)<<" ";
  minm=minm-(ls1+ls2+ls3)-min(sa,sb)-min(ra,rb)-min(pa,pab);
  cout<<minm<<" "<<maxm<<endl;


    return 0;
}