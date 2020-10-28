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
int dp[19][5][2];
int l,r;
vector<int>a;
int n;
int digdp(int pos,int nz,int tight){
if(pos==n)return 1;
if(dp[pos][nz][tight]!=-1)return dp[pos][nz][tight];
int ans=0;
int lim=9;
if(nz==3){
    ans=digdp(pos+1,nz,0);
}

else{
    //ans=1;
    if(tight)lim=a[pos];
    for(int i=0;i<=lim;i++){
         int flag = (a[pos] == i)? tight : 0; 
         int newz=(i!=0)?nz+1:nz;
        // cout<<newz<<" ";
         ans=ans+digdp(pos+1,newz,flag);
    }
return dp[pos][nz][tight]=ans;

}

}
int32_t main()
{

  int t;
  cin>>t;
  while(t--){
      a.clear();
      scanf("%lld %lld",&l,&r);
      l--;
      if(l==0)a.pb(0);
      while(l!=0){
          a.pb(l%10);
          l/=10;
      }
      reverse(a.begin(),a.end());
      memset(dp,-1,sizeof(dp));
      n=a.size();
      r;
     // f(i,n)cout<<a[i]<<" ";
     int ans1=digdp(0,0,1);
     // cout<<ans1<<endl;
      a.clear();
       while(r!=0){
          a.pb(r%10);
          r/=10;
      }

      reverse(a.begin(),a.end());
       n=a.size();
     //  f(i,n)cout<<a[i]<<" ";
      memset(dp,-1,sizeof(dp));
     int ans2=digdp(0,0,1);
  // cout<<ans2<<endl;
    cout<<ans2-ans1<<endl;

      
  }

    return 0;
}