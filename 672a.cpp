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
      int a[n];
      f(i,n){
          cin>>a[i];
          
         }
         int fl=0;
         f(i,n-1){
             if(a[i]<=a[i+1]){
                 cout<<"YES"<<endl;
                 fl=1;
                 break;
             }
         }
         if(fl==0)cout<<"NO"<<endl;
         }

    return 0;
}