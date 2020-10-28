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
int calc(int n){
    int tmp=n;
    int sum=0;
    while(tmp!=0){
      sum+=tmp%10;
      tmp=tmp/10;
    }
    return sum;
}
int32_t main()
{

  int t;
  cin>>t;
  while(t--){
      int n,s;
      scanf("%lld",&n);
      cin>>s;
      if(calc(n)<=s){
          cout<<0<<endl;
          continue;
      }
      int sum=0;
      int divi=10;
      while(calc(n)>s){
          int diff=divi-n%divi;
          n=n+diff;
          sum+=diff;
          divi*=10;
      }
      printf("%lld\n",sum);
      
      
  }

    return 0;
}