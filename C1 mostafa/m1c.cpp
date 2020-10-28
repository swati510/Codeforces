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
int n,k;
 int a[100005];
 int mx;
bool isFeasible(int H){
    int sum=0;
    f(i,n)sum+=abs(a[i]-H);
    if(sum<=k)return true;
    return false;
}
int32_t main()
{

  cin>>n>>k;
  int mini=10000000009;
  int maxm=0;
  f(i,n){
      cin>>a[i];
      mini=min(mini,a[i]);
  }
  int ele=a[0];
  int fl=0;
  f(i,n){
      a[i]-=mini;
      if(a[i]!=ele)fl=1;
      maxm=max(maxm,a[i]);
  }
  if(fl==0){
      cout<<"0"<<endl;
      return 0;
  }
  int H,mn;
   mx=maxm;
   mini=1;
   int ans;
  while(mini<maxm){
     H=(mini+maxm)/2;
     if(isFeasible(H)){
         ans=H;mini=H+1;}
     else maxm=H;
  }
  //cout<<ans<<" ";
  int fans=(mx)/ans;
  if((mx)%ans)fans++;
  cout<<fans<<endl;


    return 0;
}