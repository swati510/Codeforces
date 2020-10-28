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
int lcm(int a,int b){
    return (a*b)/__gcd(a,b);
}
int32_t main()
{

  int a,b;
  cin>>a>>b;
  map<int,int>m;
  for(int i=1;i<=lcm(a,b);i++){
      if(i%a==0&&i%b!=0)m[i]=0;
      else if(i%b==0&&i%a!=0)m[i]=1;
      else if(i%a==0&&i%b==0)m[i]=2;
  }
  int d=0;
  int ma=0,c=0;
  for(auto x:m){
      if(x.second==0)d++;
      if(x.second==1)ma++;
      if(x.second==2)c++;
  }
  if(d>ma)ma+=c;
  else if(ma>d)d+=c;
  if(d>ma)cout<<"Dasha";
  else if(ma>d)cout<<"Masha";
  else cout<<"Equal";
    return 0;
}