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
int get(int n) 
{ 
    n |= n >> 1; 
    n |= n >> 2; 
  
    n |= n >> 4; 
    n |= n >> 8; 
    n |= n >> 16; 
    n=n+1;
    return (n >> 1); 
} 
  
int32_t main()
{

  int n;
  cin>>n;
  int a[n];
  f(i,n)cin>>a[i];
  int sum=0;
  multiset<int>s;
  f(i,n){
      for(int j=i+1;j<=n;j++){
          int z=0;
          for(int k=i;k<j;k++){
             s.insert(a[k]);
          }
          while (s.size()>1)
          {
               auto tp=s.begin();
                multiset<int>::iterator l=s.end();
                l--;
               z=get((*tp)^(*l));
               s.erase(tp);
               s.erase(l);
               s.insert(z);
          }
          
         sum+=*s.begin();
           s.erase(s.begin());

      }
      
  }
  cout<<sum<<endl;

    return 0;
}