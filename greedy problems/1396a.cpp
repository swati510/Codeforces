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
  if (n == 1) {
      for (int z = 0; z < 3; ++z) {
         cout << "1 1\n";
         cout << -a[0] << "\n";
         a[0] = 0;
      }
      return 0;
   }
  int N=n;
 cout << "1 " << n << "\n";
   for (int i = 0; i + 1 < N; ++i) cout << -a[i] * n << " "; cout << "0\n";
   cout << "1 " << N - 1 << "\n";
   for (int i = 0; i + 1 < N; ++i) cout << a[i] * (N - 1) << " "; cout << "\n";
   cout << N << " " << N << "\n";
   cout << -a[N - 1] << "\n";

    return 0;
}