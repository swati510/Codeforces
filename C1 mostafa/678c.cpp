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
int mod=1000000007;
unsigned long long fac(int n)
{
    unsigned long long f = 1;
    for (int i = 1; i <= n; i++)
        f = (f*i) % mod;  
    return f;
}

int32_t main()
{

  int t=1;
  int sm=0;int gr=0;
  while(t--){
     int n,x,pos;
     cin>>n>>x>>pos;
     int st=0,en=n;
     pos;
     while(st<en){
         int mid=(st+en)/2;
         if(mid==pos)break;
         else if(mid>pos){
             gr++;
             en=mid-1;
         }
         else{
             sm++;
             st=mid+1;
         }
     }
     if(sm>=x||gr>=(n-x)){
         cout<<"0"<<endl;
         continue;
     }
     else cout<<fac(n-(gr+sm+1))%mod<<endl;

  }

    return 0;
}