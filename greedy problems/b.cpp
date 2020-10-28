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
int clac(int x,int n){
    int sum=1;
    for(int i=1;i<n;i++){
        int val=x,j=i-1;
        while(j-->0)val*=x;
        sum+val;
    }
    return sum;

}
int32_t main()
{

  int t=1;
  while(t--){
      int n;
      cin>>n;
      int a[n];
      
      int s=0;
      for(int i=0;i<n;i++){
          cin>>a[i];
          s+=a[i];
      }
      sort(a,a+n);
      double base=(double)1/(n-1);
      int val1=floor(pow(a[n-1],base));
      int val2=ceil(pow(a[n-1],base));
      
     int sum=0;
      for(int i=0;i<=n-1;++i)
         sum+=abs(pow(val1,i)-a[i]);
    int sum2=0;
     for(int i=0;i<=n-1;++i)
         sum2+=abs(pow(val2,i)-a[i]);
     cout<<min(sum,sum2)<<endl;
      

      
  }

    return 0;
*}