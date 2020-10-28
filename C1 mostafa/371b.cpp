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

  int a,b;
  cin>>a>>b;
  int c12=0,c13=0,c15=0,c22=0,c23=0,c25=0;
  while(a%2==0){
      c12++;
      a/=2;
  }
  while(a%3==0){
      c13++;
      a/=3;
  }
  while(a%5==0){
      c15++;
      a/=5;
  }
  while(b%2==0){
      c22++;
     b/=2;
  }
  while(b%3==0){
      c23++;
      b/=3;
  }
  while(b%5==0){
      c25++;
      b/=5;
  }
  if(a!=b)cout<<"-1"<<endl;
  else cout<<abs(c12-c22)+abs(c13-c23)+abs(c15-c25)<<endl;

    return 0;
}