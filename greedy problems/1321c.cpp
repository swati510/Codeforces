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
   int n;
 string a;
 unordered_map<string,int>dp;
 int go(char ini,int i){
     if(i==n)return 0;
     int ans=0;
     string s=to_string(ini)+"|"+to_string(i);
     if(dp.find(s)!=dp.end())return dp[s];
     if(abs(a[i]-ini)==1){
         cout<<a[i]<<" "<<ini<<" ";
      ans=max(1+go(a[i],i+1),1+go(ini,i+1));
     }
     else ans=go(a[i],i+1);
     return dp[s]=ans;

 }
int32_t main()
{


  cin>>n;
  cin>>a;
  int ans=go('*',0);
  cout<<ans<<endl;
 

    return 0;
}