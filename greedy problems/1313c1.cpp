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
  int ans=INT_MIN,ansidx=-1;
  for(int i=0;i<n;i++){
      int val=a[i];
      int curr=a[i];
      for(int j=i-1;j>=0;j--){
          curr=min(curr,a[j]);
          val+=curr;
      }
      curr = a[i];
      for(int j=i+1;j<n;j++){
          curr=min(curr,a[j]);
          val+=curr;
      }
      if(val>ans){
          ans=val;
          ansidx=i;
      }
  }
  int answer[n];
  answer[ansidx] = a[ansidx];
	int cur = a[ansidx];
	for(int i = ansidx - 1; i >= 0; i--)
	{
		cur = min(cur, a[i]);
		answer[i] = cur;
	}
	cur = a[ansidx];
	for(int i = ansidx + 1; i < n; i++)
	{
		cur = min(cur, a[i]);
		answer[i] = cur;
	}
    f(i,n)cout<<answer[i]<<" ";

    return 0;
}