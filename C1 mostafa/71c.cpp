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

void factorize(int n,vector<int>&s) 
{ 
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
              s.pb(i);
              if(i!=n/i);
              s.pb(n/i);
        } 
    } 
    for(auto i:s )cout<<i<<" ";
} 
int32_t main()
{

  vector<int>s;
  int n;
  cin>>n;
  factorize(n,s);
  int a[n];
  int maxg=0;
  int g=0;
  //f(i,n)cin>>a[i];
  for(int i=0;i<=n;i++){
      if(a[i]!=0){
          maxg=max(maxg,g);
          g=0;
      }
      else g++;
  }
 int fl=0;
 //cout<<maxg;
  for(auto i:s){
     // cout<<i<<" ";
      if(i>=3){
     // cout<<" "<<(n/i-1);
      if(maxg<=(n/i-1)){
          cout<<"YES"<<endl;
          fl=1;
          break;
      }}
  }
if(!fl)cout<<"NO"<<endl;
    return 0;
}