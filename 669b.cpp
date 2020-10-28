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
      unordered_map<int,int>m;
      f(i,1000)m[i]=0;
      f(i,n){
          cin>>a[i];
          m[a[i]]++;
      }
      sort(a,a+n,greater<int>());
      int c[n];
      c[0]=a[0];
      m[a[0]]--;
      int gcd=a[0];
      int ind=1;
      
      while(ind<n){
          int elem,maxm=1;
          for(int i=1;i<n;i++){
              int val=__gcd(gcd,a[i]);
              if(m[a[i]]>0&&maxm<val){
                  elem=a[i];
                  maxm=val;
              }
          }
          if(maxm==1)break;
          m[elem]--;
          c[ind]=elem;
          gcd=maxm;
          ind++;


      }
      while(ind<n){
          for(int i=0;i<n;i++){
              if(m[a[i]]){
                  c[ind++]=a[i];
                  m[a[i]]--;
              }
          }
      }
      f(i,n)cout<<c[i]<<" ";
      cout<<endl;
      
      
  }

    return 0;
}