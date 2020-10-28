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
int isp[100006];
void isPrime(){
memset(isp,1,sizeof(isp));
isp[0]=isp[1]=0;
isp[2]=1;
for(int i=2;i*i<=100005;i++){
    if(isp[i])
        for(int j=i*i;j<=100005;j+=i)isp[j]=0;
}
}
int32_t main()
{

  isPrime();
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      int ans;
      
      for(int i=0;i<=100005;i++){
          if(isp[i]==0)if(isp[n-1+i]){
              ans=i;
              break;}
      }
    int sol[n][n];
    f(i,n)f(j,n)sol[i][j]=1;
    //memset(sol,1,sizeof(sol));
    for(int i=0;i<n;i++){
        sol[i][n-1-i]=ans;
    }
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++)cout<<sol[i][j]<<" ";
         cout<<endl;
     }


      
  }

    return 0;
}