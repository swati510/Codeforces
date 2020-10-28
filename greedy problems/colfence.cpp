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
int dp[10][100001];
int v;
int a[11];
string calc(int i,int v){
    if(i==0){
        if(v>=0)
        return 0;
        return INT_MIN;}
    if(dp[i][v]!=-1)return dp[i][v];
    int ans=0;

    if(a[i]<=v){
         string s="";
         int res=0;
         while(res<v){
             res+=a[i];
             s+=to_string(i);

         }
         //int a2=stoi(s);
         ans=max(s+calc(i-1,v-a[i]),calc(i-1,v));
    }
    else ans=calc(i-1,v);
   return dp[i][v]=ans;

}

int32_t main()
{

  cin>>v;
  for(int i=1;i<=9;i++)cin>>a[i];
  memset(dp,-1,sizeof(dp));
  string ans=calc(9,v);
  (ans!=INT_MIN)?cout<<ans<<endl:cout<<"-1"<<endl;

    return 0;
}