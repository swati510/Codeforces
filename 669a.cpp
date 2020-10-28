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
      int z=0,o=0;
      f(i,n){
          int a;
          cin>>a;
          if(a==1)o++;
          else z++;
      }
     if(n/2%2){
         if(z>=o){
             cout<<n/2<<endl;
             f(i,n/2)cout<<"0 ";
         }
         else{
              cout<<n/2+1<<endl;
             f(i,n/2+1)cout<<"1 ";
         }
     }
     else{
         if(z>=o){
             cout<<n/2<<endl;
             f(i,n/2)cout<<"0 ";
         }
         else{
              cout<<n/2<<endl;
             f(i,n/2)cout<<"1 ";
         }
     }
     cout<<endl;
      
      
      
  }

    return 0;
}