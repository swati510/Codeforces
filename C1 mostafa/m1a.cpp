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
struct cmp{
    bool operator()(pii a,pii b){
        if(a.sc-a.fi==b.sc-b.fi)return a.fi<b.fi;
        else return a.sc-a.fi>b.sc-b.fi;
    }
};

int32_t main()
{

  int n,m;
  cin>>n>>m;
  int mini=INT_MAX;
  f(i,m){
      int a,b;
      cin>>a>>b;
      mini=min(mini,b-a);
  }
 cout<<mini+1<<endl;
 f(i,n){
     cout<<i%(mini+1)<<" ";
 }


  

    return 0;
}