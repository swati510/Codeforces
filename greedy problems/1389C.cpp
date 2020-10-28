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
int32_t main()
{

  int t;
  cin>>t;
  while(t--){
      string s;
      cin>>s;
      n=s.length();
      int c=0;
      map<pair<int,int>,int>m;
      for(int i=0;i<=9;i++){
          for(int j=0;j<=9;j++){
              int a=i, b=j;
              c=0;
              for(int k=0;k<n;k++){
                  if(s[k]-'0'==a){
                      c++;
                      swap(a,b);
                  }
                  if(a==b)m[{i,j}]=c;
                 else if(c%2==0)m[{i,j}]=c;
              }
          }
      }
      int maxm=0;
     for(auto x:m){
     maxm=max(maxm,x.sc);
     }
     cout<<n-maxm<<endl;


  }

    return 0;
}