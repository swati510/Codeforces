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
      int n,m;
      cin>>n>>m;
      int mat[n][m];
      int ans=0;
      f(i,n){
          f(j,m)cin>>mat[i][j];
      }
      for(int line=0;line<(n+m-1)/2;line++){
          map<int,int>c;
          c[0]=0;
          c[1]=0;
         int count=min(line+1,min(m,n));
        int i=(m>line)?0:line-(m-1);
        int j=min(line,m-1);
         while(count>0){
             c[mat[i][j]]++;
             c[mat[n-1-i][m-1-j]]++;
             count--;
             i++;
             j--;
         }

         ans+=min(c[0],c[1]);

      }
      cout<<ans<<endl;

  }

    return 0;
}