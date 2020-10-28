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

  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      int a[n];
      f(i,n)cin>>a[i];
      int c1=0,c2=0,dom,fl=0,maxm=a[0],ind=0;
      f(i,n){
          if(maxm<a[i]){
            maxm=a[i];
              ind=i;
          }  
      }
      if(ind==0){
          for(int i=1;i<n;i++)if(a[i]==a[ind])ind++;
          else break;
      }
      if(ind==n-1){
          for(int i=n-2;i>=0;i--)if(a[i]==a[ind])ind--;
          else break;
      }
     for(int i=1;i<n;i++){
         if(a[i]!=a[0])fl=1;
     }
      if(fl)cout<<ind+1<<endl;
      else cout<<"-1"<<endl;


      
  }

    return 0;
}