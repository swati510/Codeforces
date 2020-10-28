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
int fac[31];
  int fact() 
{ 
    fac[0]=1;
    fac[1]=1;
    for(int i=2;i<=30;i++)fac[i]=fac[i-1]*i;
} 
  
int nCr(int n, int r)
{
    int p = 1, k = 1;
    if (n - r < r)
        r = n - r;
    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;
            int m = __gcd(p, k);
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
    }
    else
        p = 1;
    return p;
} 
  
// Returns factorial of n 

int32_t main()
{
  fact();
  int n,m,t;
  cin>>n>>m>>t;
  int ans=0;
 //cout<< fac[20];
  for(int c=4;c<t;c++){
     if(c<=n&&t-c<=m) ans+=nCr(n,c)*nCr(m,t-c);
    //cout<<ans<<" ";
  }
 // ans=nCr(n,4)*nCr(m,1);
  cout<<ans<<endl;

    return 0;
}