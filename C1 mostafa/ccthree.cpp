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
bool isit(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
int32_t main()
{

  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      if(n==1){
          cout<<"1"<<endl;
          continue;
      }
      if(n<=2||isit(n)){
          cout<<"-1"<<endl;
          continue;
      }
      int a[n+1];
      a[0]=2;
      a[1]=3;
      a[2]=1;
     for(int i=3;i<n;i++){
         a[i]=i+1;
     }
     //f(i,n)cout<<a[i]<<" ";
     for(int i=3;i<n;i++){
         if(isit(i+1)){
             int tmp=a[i];
             a[i]=a[i+1];
             a[i+1]=tmp;
         }
     }
     int fla=0;
     f(i,n-1){
         if(a[i]&a[i+1]==0){
             cout<<"-1";
             fla=1;
             break;
        
         }
     }
     if(!fla) f(i,n)cout<<a[i]<<" ";  
      cout<<endl;
  }

    return 0;
}