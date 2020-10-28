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
 string s;
string st;
  int r;
  map<char,int>m;
  map<char,int>n;
  map<char,int>p;
  map<int,char>l;
  bool feasible(int count){
      int tmp=r;
      for(auto i:st){
         tmp-=max(0LL,(count*m[i]-n[i])*p[i]);
         if(tmp<0)return false;
      }
      return true;

  }
int32_t main()
{

 st="BSC";
  cin>>s;
  int maxm=0;
  char maxc;
  for(auto i:s){
      m[i]++;
      if(maxm<m[i]){
          maxm=m[i];
          maxc=i;
      }
  }
  for(auto i:st){
      int a;
      cin>>a;
     n[i]=a;
  }
  for(auto i:st){
      int a;
      cin>>a;
      p[i]=a;
  }
  cin>>r;
  
  
int high=1e14;
int low=0;
while(low<high){
    int mid=(high+low+1)/2;
    if(feasible(mid))low=mid;
    else high=mid-1;
}
cout<<low<<endl;

    return 0;
}