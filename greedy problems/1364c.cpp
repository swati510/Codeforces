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

  int n;
  cin>>n;
  int a[n];
  map<int,int>m;
  int flag=0;
  f(i,n){
      cin>>a[i];
      m[a[i]]=i;
      if(a[i]>i+1){
         flag=1;
          
      }
  }
  if(flag){
      cout<<"-1";
      return 0;
  }
  int b[n];
  priority_queue <int, vector<int>, greater<int> > pq; 
  int ini=0;
  for(int i=0;i<n;i++){
   if(!pq.empty()&&m[pq.top()]<i){
       b[i]=pq.top();
       pq.pop();
   }
   else{
   while(m.find(ini)!=m.end()&&m[ini]>=i){
    pq.push(ini);
    ini++;
   }
   b[i]=ini;
   ini++;
   }
  
  }
   f(i,n)cout<<b[i]<<" ";


    return 0;
}