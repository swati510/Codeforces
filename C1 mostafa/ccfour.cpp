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
      int n,p,x,k;
      cin>>n>>x>>p>>k;
      int a[n];
      f(i,n)cin>>a[i];
      sort(a,a+n);
      p--;
      k--;
      if(x==a[p]){
          cout<<"0"<<endl;
          continue;
      }
      if(p<k){
          if(x>a[p])cout<<"-1"<<endl;
          else{
              int count=0;
              for(int i=0;i<p;i++){
                  if(a[i]>x)count++;
              }
              cout<<count+1<<endl;
          }
      }

      else if(p==k){
          int count=0;
          if(x>a[p]){
               for(int i=n-1;i>p;i--){
                  if(a[i]<x)count++;
              }
          }
          else if(x<a[p]){
              for(int i=0;i<p;i++){
                  if(a[i]>x){count++;
                  //cout<<"ki";
                  }
              }
          }
          else if(x==a[p])count=-1;
          cout<<count+1<<endl;

      }
      else if(p>k){
          if(x<a[p])cout<<"-1"<<endl; 
          
          else{
              int count=0;
              for(int i=n-1;i>p;i--){
                  if(a[i]<x)count++;
              }
              cout<<count+1<<endl;
          }
      }
      
  }

    return 0;
}