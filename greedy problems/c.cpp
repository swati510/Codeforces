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
      map<char,int>m;
      f(i,n){
          string str;
          cin>>str;
          f(j,str.length())m[str[j]]++;
      }
      int flag=0;
      for(auto i:m)if(i.second%n!=0){
          flag=1;
          break;
      }
      if(flag)cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
  }

    return 0;
}