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
  int a[n];
  f(i,n)cin>>a[i];
  sort(a,a+n);

  int ans[n];
  int j=n-1,k=0;
  f(i,n){
      if(i%2==0){
          ans[i]=a[j--];
      }
      else ans[i]=a[k++];
  }
  int c=0;
for(int i=1;i<n-1;i+=2){
if(ans[i]<ans[i-1]&&ans[i]<ans[i+1])c++;
}
  cout<<c<<endl;
f(i,n)cout<<ans[i]<<" ";

    return 0;
}