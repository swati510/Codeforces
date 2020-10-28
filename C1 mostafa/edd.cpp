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
struct cmp {
    bool operator() (pii a,pii b)const {
        
return a.sc>b.sc;
    }
};

int32_t main()
{

  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      string a;
      cin>>a;
      int c=0;
      multiset<pii,cmp>mul;
      vector<int>v;
  int count=0;
      for(int i=0;i<n;i++){
          if(i>0&&a[i]!=a[i-1]){
              v.push_back(c);
              // mul.insert({count++,c});
                c=1;
          }
          else{
              c++;
          }
      }
if(c)v.pb(c);
int ans=0;
int m=v.size();
for(int i=0;i<v.size();i++){
    if(v[i]>1){
        ans++;
        continue;
    }
    int j=i+1;
    while(j<m&&v[j]==1)j++;
    if(j==m){
       ans+=(m-i+1)/2;
        break;
    }
    v[j]-=1;
    ans++;
    

}
  cout<<ans<<endl;
     
  }

    return 0;
}