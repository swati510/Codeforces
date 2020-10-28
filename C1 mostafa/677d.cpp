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
      vector<pair<int,int>>v;
      f(i,n){
          int a;
          cin>>a;
          v.pb({a,i+1});
      }
      int fs=v[0].fi;
      int fl=0;
      sort(v.begin(),v.end());
      f(i,n){
          if(v[i].fi!=fs){
              fl=1;
              break;
          }
      }
      if(fl==0)cout<<"NO"<<endl;


      else{
          cout<<"YES"<<endl;
          for(int i=0;i<n-1;i++){
              if(v[i].fi==v[0].fi){
                  cout<<v[i].sc<<" "<<v[n-1].sc<<endl;
              }
              else cout<<v[i].sc<<" "<<v[0].sc<<endl;
          }


      }


      
  }

    return 0;
}