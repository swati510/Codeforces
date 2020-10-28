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
  map<int,int>x;
  map<int,int>y;
  map<pii,int>xy;
  f(i,n){
      int a,b;
      cin>>a>>b;
      x[a]++;
      y[b]++;
      xy[{a,b}]++;
  } 
   int c1=0,c2=0,c3=0;
   for(auto i:x){
       c1+=(i.sc)*(i.sc-1)/2;
   }
   for(auto i:y){
       c2+=(i.sc)*(i.sc-1)/2;
   }
   for(auto i:xy){
       c3+=(i.sc)*(i.sc-1)/2;
   }
 cout<<c1+c2-c3<<endl;

    return 0;
}