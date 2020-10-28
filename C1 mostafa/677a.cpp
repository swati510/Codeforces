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
int countdig(int n){
    int c=0;
    while(n!=0){
        c++;
        n=n/10;
    }
    return c;
}
int firstc(int n){
    return n%10;
}
int32_t main()
{

  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      int ans=countdig(n);
      int ff=firstc(n);
      int sum=10;      int fin=(ff-1)*10;
      for(int i=1;i<=ans;i++)fin+=i;
      cout<<fin<<endl;

      
  }

    return 0;
}