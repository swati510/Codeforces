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
      int n;
      cin>>n;
      
      cout<<"2"<<endl;
      priority_queue <int>pq;
      f(i,n)pq.push(i+1);
      while(pq.size()>1){
          int x=pq.top();
          cout<<pq.top();
          pq.pop();
          int y=pq.top();
          pq.pop();
          cout<<" "<<y<<endl;
          pq.push((x+y+1)/2);
      }
      
  }

    return 0;
}