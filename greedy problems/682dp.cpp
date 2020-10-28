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
int n,m,k;
string s1,s2;
int dp[1001][1001][11][2];
int go(int i,int j,int k,int inc){
   
    if(i<0||j<0){
         if(k==0)return 0;
         return -INF;}
         if(k<0) return -INF;
    //int &ret=dp[i][j][k];
    if(dp[i][j][k][inc]!=-1)return dp[i][j][k][inc];
    int maxi=-INF,ans2=-INF;
    maxi=max(go(i-1,j,k,0),go(i,j-1,k,0));
    // int ans1=1+go(i-1,j-1,k-1,1);
    if(s1[i]==s2[j]){
     if(inc==1)maxi=max(maxi,1+go(i-1,j-1,k,1));
     maxi=max(maxi,1+go(i-1,j-1,k-1,1));
    }
    
       // int ans1=1+go(i-1,j-1,k-1,1); 
        //int ans2=go(i-1,j-1,k,0);
        //maxi=max(maxi,max(ans1,ans2));
    
return dp[i][j][k][inc]=maxi;
}
int32_t main()
{
cin>>n>>m>>k;
cin>>s1>>s2;
memset(dp,-1,sizeof(dp));
int ans=go(n-1,m-1,k,0);
cout<<ans<<endl;
 
  
 
    return 0;
}