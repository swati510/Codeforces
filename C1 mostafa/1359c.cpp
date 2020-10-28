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

  int T;
  cin>>T;
  while(T--){
      int h,c,t;
      cin>>h>>c>>t;
      int low=0;
      int high=1000000;
      double minm;
      int mini;
      while(high>low){
          int mid=(high+low)/2;
          double ans= (double)((mid+1)*h+(mid)*c)/(2*mid+1);
         // cout<<ans<<" j";
         if(ans==t)
          if(abs(ans-t)>minm){
              minm=abs(ans-t);
              mini=mid;
          }
          if(ans>=t)high=mid;
          else low=mid+1;
      }
      cout<<minm<<" k";
      double ans2=(double)(h+c)/2;
      if(abs(ans2-t)>minm){
          cout<<"2"<<endl;
          continue;
      }
      cout<<mini+mini-1<<endl;

  }

    return 0;
}