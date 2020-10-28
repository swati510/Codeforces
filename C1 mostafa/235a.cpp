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
  if(n<=2)cout<<n<<endl;  
  else{
  if(n%2){
      cout<<n*(n-1)*(n-2)<<endl;
  }
  else{
       int a=n,b=n-1;
       int c=n-2;
       int tmp=c;
       while((__gcd(a,c)>1||__gcd(c,b)>1)&&c>0){
           c--;
       }
       int ans=(a*b*tmp)/2;
       cout<<max(ans,max(a*b*c,(a-1)*(b-1)*(tmp-1)))<<endl;
  }
  }
    return 0;
}