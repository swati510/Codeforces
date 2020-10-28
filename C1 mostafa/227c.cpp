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
int n,m;
int C;
int exponentMod(int A, int B)  
{  
    if (A == 0)  
        return 0;  
    if (B == 0)  
        return 1;  
   
   int  y;  
    if (B % 2 == 0) {  
        y = exponentMod(A, B / 2);  
        y = (y * y) % C;  
    }  
    else {  
        y = A % C;  
        y = (y * exponentMod(A, B - 1) % C) % C;  
    }  
  
    return (int)((y + C) % C);  
}  
int32_t main()
{

 cin>>n>>m;
 C=m;
 int ans=0;
for(int i=n-1;i>=1;i--)ans+=exponentMod(4,i);
 
ans+=n*2;
ans%=m;
cout<<ans<<endl;

    return 0;
}