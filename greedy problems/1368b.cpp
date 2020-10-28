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
int prod(vi v){
    int p=1;
    for(auto x:v)p*=x;
    return p;
}
int32_t main()
{

  int n ;
  cin>>n;
  vi v(10,1);
  int tmp=1,p=1;
  while(p<n){
      for(int i=0;i<10;i++){
          v[i]++;
          p=prod(v);
          if(p>=n)
              break;
      }
  }
  string s="codeforces";
  for(int i=0;i<10;i++){
      while(v[i]--)cout<<s[i];
  }


    return 0;
}