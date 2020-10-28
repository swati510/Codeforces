#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define mp make_pair
#define fi first
#define sc second
#define f(i,n) for(int i=0;i<n;i++)
#define forall(i,a,b) for(int i=a;i<b;i++)
#define INF 	922337203685477580
using namespace std;
typedef  pair<int,int> pii;
typedef  vector<int>   vi;
typedef  vector<pii> vii;
int n,m,k;
int dp[101][101][101];
int col[101];
int p[101][101];
int calc(int i,int states,int last){
    if(i==n){
        if(states==k)return 0;
        return INF;
    }
    int &ret = dp[i][states][last];
   // cout<<ret;
    if(ret!=-1)return ret;
    int ans1=INF,ans2,mini=INF;
    if(col[i]!=0)return ret=calc(i+1,last==col[i]?states:states+1,col[i]);
    else{
       // cout<<"k 0";
    for(int j=1;j<=m;j++){
        ans1=p[i][j]+calc(i+1,(j==last)?states:states+1,j);
        mini=min(mini,ans1);
    }
    }
    
    
    return ret=mini;
    /*
    3 2 2
    0 0 0
    1 2
    3 4
    5 6
*/
    
}
int32_t main()
{

  int t;
 // cin>>t;
 t=1;
  memset(dp,-1,sizeof(dp));
  
  while(t--){
      cin>>n>>m>>k;
     // cout<<n<<m<<k;
     
      f(i,n)cin>>col[i];
     
      for(int i=0;i<n;i++){
        for(int j=1;j<=m;j++)cin>>p[i][j];
      }
     int ans= calc(0,0,0);
     
     if(ans==INF)cout<<"-1"<<endl;
     else cout<<ans<<endl;

  }

    return 0;
}