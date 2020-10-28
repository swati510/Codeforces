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
      string a;
      cin>>a;
      vi last0,last1;
      int res[n];
      int newp;
      
      f(i,n){
      int newp=last0.size()+last1.size();

      if(a[i]=='0'){
          if(last1.size()){
              newp=last1.back();
              last1.pop_back();
              last0.pb(newp);
          }
          else{
              last0.pb(newp);
          }
      }
       else if(a[i]=='1'){
          if(last0.size()){
              newp=last0.back();
              last0.pop_back();
              last1.pb(newp);
          }
          else{
              last1.pb(newp);
          }
      }
      res[i]=newp;



      }
      int maxm=0;
      f(i,n)maxm=max(maxm,res[i]+1);
      cout<<maxm<<endl;
      f(i,n)cout<<res[i]+1<<" ";
      cout<<endl;
       
  }

    return 0;
}